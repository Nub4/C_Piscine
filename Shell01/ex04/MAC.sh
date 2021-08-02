ifconfig -a | awk '/ether / {print}' | awk '{print $2}'
