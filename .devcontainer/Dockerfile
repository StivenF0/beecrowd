# Base Image
FROM alpine:3.21.3

# Update and install dependencies
RUN apk update && apk upgrade && \
    apk add --no-cache \
        build-base \
        cmake \
        gdb \
        git \
        bash \
        curl \
        && rm -rf /var/cache/apk/*

# Create a non-root user for development
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN addgroup -g $USER_GID $USERNAME && \
    adduser -u $USER_UID -G $USERNAME -s /bin/bash -D $USERNAME

# Set up the prompt for the vscode user
RUN echo "export PS1='\n\[\033[1;31m\]\w\n\[\033[1;32m\]\$\[\033[0m\] '" >> /home/vscode/.bashrc

# Set the workspace directory
WORKDIR /workspace

# Switch to non-root user
USER $USERNAME