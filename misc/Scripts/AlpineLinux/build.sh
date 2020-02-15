#!/bin/bash

git clone https://github.com/matgnt/libhomegear-ipc.git

git clone https://github.com/matgnt/libhomegear-base.git

git clone https://github.com/Homegear/libhomegear-node.git


cd libhomegear-base
./bootstrap
./configure --prefix=/usr --localstatedir=/var --sysconfdir=/etc --libdir=/usr/lib
make
make install

cd ../libhomegear-node
./bootstrap
./configure --prefix=/usr --localstatedir=/var --sysconfdir=/etc --libdir=/usr/lib
make
make install

cd ../libhomegear-ipc
./bootstrap
./configure --prefix=/usr --localstatedir=/var --sysconfdir=/etc --libdir=/usr/lib
make
make install

cd ../
./bootstrap
./configure --withou-scriptengine --prefix=/usr --localstatedir=/var --sysconfdir=/etc --libdir=/usr/lib
make
make install
