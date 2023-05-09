LEX      = flex
YACC     = bison
CC       = g++
CFLAGS   = -std=gnu++2a

SOURCE_DIR   := .
BUILD_DIR    := ./build

H_RP4    = $(wildcard ${SOURCE_DIR}/rp4_*.h) $(wildcard ${SOURCE_DIR}/*.hpp)
H_IPSA   = $(wildcard ${SOURCE_DIR}/ipsa_*.h)
SOURCE   = ${SOURCE_DIR}/rp4c.cpp
CMP_SRC  = ${SOURCE_DIR}/rp4_compiler.cpp
LEX_SRC  = ${SOURCE_DIR}/lex.l
YACC_SRC = ${SOURCE_DIR}/yacc.y

TARGET   = ${BUILD_DIR}/rp4c
OBJECT   = ${BUILD_DIR}/rp4c.o
CMP_TGT  = ${BUILD_DIR}/rp4_compiler
CMP_OBJ  = ${BUILD_DIR}/rp4_compiler.o
LEX_OBJ  = ${BUILD_DIR}/lex.yy.o
LEX_C    = ${BUILD_DIR}/lex.yy.c
YACC_OBJ = ${BUILD_DIR}/yacc.o
YACC_CPP = ${BUILD_DIR}/yacc.cpp

all: check_build target

target: ${YACC_OBJ} ${LEX_OBJ} ${CMP_OBJ} ${OBJECT}
	${CC} ${CFLAGS} ${LEX_OBJ} ${YACC_OBJ} ${OBJECT} -o ${TARGET}
	${CC} ${CFLAGS} ${LEX_OBJ} ${YACC_OBJ} ${CMP_OBJ} -o ${CMP_TGT}

${YACC_OBJ}: ${YACC_SRC} ${H_RP4}
	${YACC} -d ${YACC_SRC} -o ${YACC_CPP}
	${CC} ${CFLAGS} -c ${YACC_CPP} -I ${SOURCE_DIR} -o $@

${LEX_OBJ}: ${LEX_SRC} ${H_RP4}
	${LEX} -o ${LEX_C} ${LEX_SRC}
	${CC} ${CFLAGS} -c ${LEX_C} -I ${SOURCE_DIR} -o $@

${CMP_OBJ}: ${CMP_SRC} ${H_IPSA} ${H_RP4}
	${CC} ${CFLAGS} -c ${CMP_SRC} -o $@

${OBJECT}: ${SOURCE} ${H_IPSA} ${H_RP4}
	${CC} ${CFLAGS} -c ${SOURCE} -o $@

check_build:
	if [ ! -d ${BUILD_DIR} ]; then  mkdir ${BUILD_DIR}; fi
	cd ${BUILD_DIR}

clean:
	-rm -r ${BUILD_DIR}