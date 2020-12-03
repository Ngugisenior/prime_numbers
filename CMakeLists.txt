cmake_minimum_required(VERSION 3.17)
project(prime_numbers C)

set(CMAKE_C_STANDARD 99)

add_executable(prime_numbers main.c primeNumbers.c user_checks.c)