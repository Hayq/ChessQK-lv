cmake_minimum_required(VERSION 2.8.9)

project (QK)


file(GLOB HEADERS *.h *.hpp *.hxx)
file(GLOB SOURCES *.cpp *.cxx)

add_executable(QK ${SOURCES} ${HEADERS})
