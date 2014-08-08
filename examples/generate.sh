#!/bin/bash
current_stamp=0
next_stamp=0
time_lapsed=0

while read line; do
  bool="$(echo "${line}" | awk -F, '{print $8}' )"
  if [ "$bool" -eq "0" ]
  	then bool=1
  else bool=0
  fi
  current_stamp="$(echo "${line}" | awk -F, '{print $1}' )"
  time_lapsed=$((${current_stamp} - ${next_stamp}))

  #echo "${bool}, ${time_lapsed}000"
  echo "setStateWithDelay(transmitPin,${bool},${time_lapsed}00);"
  next_stamp=${current_stamp}
done < $1