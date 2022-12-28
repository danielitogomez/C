FROM gcc:latest

COPY . /DockerWorld

WORKDIR /DockerWorld/

RUN gcc -o DockerWorld sum.c

CMD ["./DockerWorld"]