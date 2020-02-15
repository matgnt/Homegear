#!/bin/bash

apk update && apk add --no-cache alpine-sdk build-base autoconf automake gnutls-dev libgcrypt-dev linux-headers zlib-dev sqlite-dev readline-dev libtool
