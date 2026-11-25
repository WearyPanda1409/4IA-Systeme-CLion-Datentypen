cmake_minimum_required(VERSION 3.21)
project(4IA_Systeme C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_subdirectory(01_LinkedList)
add_subdirectory(02_DoubleLinkedList)
add_subdirectory(03_Bitoperationen)
add_subdirectory(04_Regelkreis/01_2PunktRegler)
add_subdirectory(04_Regelkreis/02_PIDRegler)
