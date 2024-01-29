#!/bin/bash
input=$1;
output=$2;

function ipParse()
{
	IP=$1;

	OIFS=$IFS
	IFS="/"
	IP=($IP)
	IFS=$OIFS

	mask=${IP[1]}
	IP=${IP[0]}

	OIFS=$IFS
	IFS="."
	ip=($IP)
	IFS=$OIFS


}
function submask() {

	mask=$1
	ip=$2

	echo mask:$mask
	echo ip:${ip[@]}

}
function pings()
{
  count2=($(sh <<<"echo $ips"))
  num2=0
	for ip in $(sh <<<"echo $ips");
	do
		progress3=$progress
		echo $ip result: pingCount:$timeout $(ping $ip -t $timeout 2> /dev/null| grep loss) >> $output
		progress2=`echo "scale=2; $num2/${#count2[*]}*100/$count" | bc`
		progress3=`echo "scale=2; $progress3+$progress2"|bc`
		echo "$progress3%\b\r"
		((num2++));
	done
	progress=$progress3
}

count=$(cat $input|wc -l)
num=0
while read line; 
do
	OIFS=$IFS
	IFS=" "
	line=($line);
	IFS=$OIFS

	ip=${line[0]}
	timeout=${line[1]};

	#echo $ip
	m32="/32"

	progress=`echo "scale=2; $num/$count*100" | bc`
	if [[ $ip == *$m32 ]]; then
		_ip=${ip%/*}
		echo "------ Single ------" >> $output
		echo $_ip result: pingCount:$timeout $(ping $_ip -t $timeout 2> /dev/null | grep loss ) >> $output
		echo "$progress%\b\r"
	else
		echo "------ Subnet $ip ------" >> $output
		timeout=$timeout ips=$ip pings
	fi
	
	((num++));
	#ipParse $ip
	#submask $mask $ip

	#echo ${ip[@]} $mask
done < $input

progress=`echo "scale=2; $num/$count*100" | bc`
echo "$progress%"
