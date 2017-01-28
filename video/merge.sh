
sleep 2
while true
do
	if pgrep "ffmpeg" > /dev/null
	then
	    sleep 5
	else
	    break
	fi
done

varOutputVideo="output.mpg"

#cd "/home/thomas/Desktop/projet esme/video/"
cd "/home/thomas/Desktop/Projet V6 OK/video"
./ffmpeg -i concat:"$1" -c copy "$varOutputVideo"
