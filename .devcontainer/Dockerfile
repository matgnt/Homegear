#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

# To fully customize the contents of this image, use the following Dockerfile instead:
# https://github.com/microsoft/vscode-dev-containers/tree/v0.101.0/containers/alpine-3.10-git/.devcontainer/Dockerfile
FROM mcr.microsoft.com/vscode/devcontainers/base:0-alpine-3.10

# ** [Optional] Uncomment this section to install additional packages. **
#
 RUN apk update \
     && apk add --no-cache alpine-sdk build-base autoconf automake gnutls-dev libcrypt-dev \
     linux-headers zlib-dev sqlite-dev readline-dev
