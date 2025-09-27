# ---------- Этап 1: сборка ----------
FROM ubuntu:22.04 AS builder

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Копируем проект внутрь контейнера
COPY . .

# Чистим старый build и собираем заново
RUN rm -rf build && mkdir build && cd build && cmake .. && make

# ---------- Этап 2: запуск ----------
FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    libstdc++6 \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# Копируем собранные бинарники
COPY --from=builder /app/build/ /app/

# По умолчанию запускаем основной бинарник Laba_01
CMD ["./Laba_01"]
