#!/bin/bash

rm -R build
mkdir build

cd build
cmake ..
make

dirname=$(pwd)
skriptname='.deutsch.sh'
cd ~
touch $skriptname
echo '#!/bin/bash' >> $skriptname
echo '' >> $skriptname
echo 'cd '$dirname >> $skriptname
echo './Deutsch $1/$2' >> $skriptname

echo "alias deutsch='~./"$skriptname" $(pwd)/$1'" >> .bashrc

chmod +x $skriptname