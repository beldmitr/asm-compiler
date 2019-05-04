cmake_minimum_required (VERSION 3.14)
project (asm-compiler)

# pthread is needed for g3log
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


include_directories(
		include
		/usr/local/include
	)
link_directories(
		/usr/local/lib
	)
link_libraries(
		libg3logger.a
	)


add_executable(
		asm-compiler
		src/asm-compiler.cpp
		src/Compiler.cpp
		src/PropertyLine.cpp
		src/PropertyManager.cpp
		src/Utils.cpp
	)
