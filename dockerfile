FROM ubuntu

RUN apt-get update && apt-get install -y \
    flex \
    bison

WORKDIR /app

CMD ["bash"]
