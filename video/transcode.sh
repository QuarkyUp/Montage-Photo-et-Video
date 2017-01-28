varVideo=".mpg"
varText=".txt"


#if [ -f "/home/thomas/Desktop/projet esme/video/$1$varVideo" ]
if [ -f "/home/thomas/Desktop/Projet V6 OK/video/$1$varVideo" ]
then
	#rm "/home/thomas/Desktop/projet esme/video/$1$varVideo"
	rm "/home/thomas/Desktop/Projet V6 OK/video/$1$varVideo"
fi


#cd "/home/thomas/Desktop/projet esme/video/"
cd "/home/thomas/Desktop/Projet V6 OK/video"
./ffmpeg -i "$1" -qscale:v 25 "$1$varVideo"


cd "/bin/"
#./touch "/home/thomas/Desktop/projet esme/video/$1$varText"
./touch "/home/thomas/Desktop/Projet V6 OK/$1$varText"


