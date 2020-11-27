args="$*"
ls -hAl "$args" | awk '{print $9, $5}'
