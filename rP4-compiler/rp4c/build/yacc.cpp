/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./yacc.y"

#include "rp4_ast.h"
#include "yacc.hpp"
#include <iostream>
#include <memory>

int yylex(YYSTYPE *yylval, YYLTYPE *yylloc);

void yyerror(YYLTYPE *locp, const char* s) {
    std::cerr << "Parser Error at line " << locp->first_line << " column " << locp->first_column << ": " << s << std::endl;
}


#line 85 "./build/yacc.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "yacc.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BIT = 3,                        /* BIT  */
  YYSYMBOL_STRUCT = 4,                     /* STRUCT  */
  YYSYMBOL_TRUE = 5,                       /* TRUE  */
  YYSYMBOL_FALSE = 6,                      /* FALSE  */
  YYSYMBOL_HEADER = 7,                     /* HEADER  */
  YYSYMBOL_HEADERS = 8,                    /* HEADERS  */
  YYSYMBOL_PARSER = 9,                     /* PARSER  */
  YYSYMBOL_STATE = 10,                     /* STATE  */
  YYSYMBOL_TRANSITION = 11,                /* TRANSITION  */
  YYSYMBOL_PACKET = 12,                    /* PACKET  */
  YYSYMBOL_PACKET_IN = 13,                 /* PACKET_IN  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_ACCEPT = 15,                    /* ACCEPT  */
  YYSYMBOL_EXTRACT = 16,                   /* EXTRACT  */
  YYSYMBOL_SELECT = 17,                    /* SELECT  */
  YYSYMBOL_ACTIONS = 18,                   /* ACTIONS  */
  YYSYMBOL_ACTION = 19,                    /* ACTION  */
  YYSYMBOL_NOACTION = 20,                  /* NOACTION  */
  YYSYMBOL_TABLES = 21,                    /* TABLES  */
  YYSYMBOL_TABLE = 22,                     /* TABLE  */
  YYSYMBOL_KEY = 23,                       /* KEY  */
  YYSYMBOL_SIZE = 24,                      /* SIZE  */
  YYSYMBOL_DEFAULT_ACTION = 25,            /* DEFAULT_ACTION  */
  YYSYMBOL_ENTRIES = 26,                   /* ENTRIES  */
  YYSYMBOL_EXACT = 27,                     /* EXACT  */
  YYSYMBOL_TERNARY = 28,                   /* TERNARY  */
  YYSYMBOL_LPM = 29,                       /* LPM  */
  YYSYMBOL_STAGE = 30,                     /* STAGE  */
  YYSYMBOL_CONTROL = 31,                   /* CONTROL  */
  YYSYMBOL_MATCHER = 32,                   /* MATCHER  */
  YYSYMBOL_EXECUTOR = 33,                  /* EXECUTOR  */
  YYSYMBOL_SWITCH = 34,                    /* SWITCH  */
  YYSYMBOL_HIT = 35,                       /* HIT  */
  YYSYMBOL_MISS = 36,                      /* MISS  */
  YYSYMBOL_NONE = 37,                      /* NONE  */
  YYSYMBOL_IS_VALID = 38,                  /* IS_VALID  */
  YYSYMBOL_VALUE_WIDTH = 39,               /* VALUE_WIDTH  */
  YYSYMBOL_EQU = 40,                       /* EQU  */
  YYSYMBOL_NEQ = 41,                       /* NEQ  */
  YYSYMBOL_LEQ = 42,                       /* LEQ  */
  YYSYMBOL_GEQ = 43,                       /* GEQ  */
  YYSYMBOL_T_EOF = 44,                     /* T_EOF  */
  YYSYMBOL_ANDANDAND = 45,                 /* ANDANDAND  */
  YYSYMBOL_DIVDIVDIV = 46,                 /* DIVDIVDIV  */
  YYSYMBOL_IDENTIFIER = 47,                /* IDENTIFIER  */
  YYSYMBOL_VALUE_STRING = 48,              /* VALUE_STRING  */
  YYSYMBOL_VALUE_INT = 49,                 /* VALUE_INT  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* ';'  */
  YYSYMBOL_53_ = 53,                       /* '<'  */
  YYSYMBOL_54_ = 54,                       /* '>'  */
  YYSYMBOL_55_ = 55,                       /* '('  */
  YYSYMBOL_56_ = 56,                       /* ')'  */
  YYSYMBOL_57_ = 57,                       /* '.'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* ':'  */
  YYSYMBOL_60_ = 60,                       /* '*'  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* '+'  */
  YYSYMBOL_63_ = 63,                       /* '-'  */
  YYSYMBOL_64_ = 64,                       /* '/'  */
  YYSYMBOL_65_ = 65,                       /* '&'  */
  YYSYMBOL_66_ = 66,                       /* '|'  */
  YYSYMBOL_67_ = 67,                       /* '^'  */
  YYSYMBOL_68_ = 68,                       /* '~'  */
  YYSYMBOL_69_ = 69,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_start = 71,                     /* start  */
  YYSYMBOL_header_defs = 72,               /* header_defs  */
  YYSYMBOL_header_def = 73,                /* header_def  */
  YYSYMBOL_field_defs = 74,                /* field_defs  */
  YYSYMBOL_field_def = 75,                 /* field_def  */
  YYSYMBOL_type_def = 76,                  /* type_def  */
  YYSYMBOL_struct_defs = 77,               /* struct_defs  */
  YYSYMBOL_struct_def = 78,                /* struct_def  */
  YYSYMBOL_parser_def = 79,                /* parser_def  */
  YYSYMBOL_state_defs = 80,                /* state_defs  */
  YYSYMBOL_state_def = 81,                 /* state_def  */
  YYSYMBOL_extract_stmt = 82,              /* extract_stmt  */
  YYSYMBOL_member = 83,                    /* member  */
  YYSYMBOL_transition_stmt = 84,           /* transition_stmt  */
  YYSYMBOL_fields = 85,                    /* fields  */
  YYSYMBOL_direct_entry = 86,              /* direct_entry  */
  YYSYMBOL_field = 87,                     /* field  */
  YYSYMBOL_transition_entries = 88,        /* transition_entries  */
  YYSYMBOL_transition_entry = 89,          /* transition_entry  */
  YYSYMBOL_key_def = 90,                   /* key_def  */
  YYSYMBOL_actions_def = 91,               /* actions_def  */
  YYSYMBOL_action_defs = 92,               /* action_defs  */
  YYSYMBOL_action_def = 93,                /* action_def  */
  YYSYMBOL_parameters = 94,                /* parameters  */
  YYSYMBOL_expressions = 95,               /* expressions  */
  YYSYMBOL_expression = 96,                /* expression  */
  YYSYMBOL_lvalue = 97,                    /* lvalue  */
  YYSYMBOL_operation = 98,                 /* operation  */
  YYSYMBOL_op = 99,                        /* op  */
  YYSYMBOL_operand = 100,                  /* operand  */
  YYSYMBOL_tables_def = 101,               /* tables_def  */
  YYSYMBOL_table_defs = 102,               /* table_defs  */
  YYSYMBOL_table_def = 103,                /* table_def  */
  YYSYMBOL_table_key_def = 104,            /* table_key_def  */
  YYSYMBOL_key_entries = 105,              /* key_entries  */
  YYSYMBOL_key_entry = 106,                /* key_entry  */
  YYSYMBOL_match_type = 107,               /* match_type  */
  YYSYMBOL_table_optional_stmts = 108,     /* table_optional_stmts  */
  YYSYMBOL_table_optional_stmt = 109,      /* table_optional_stmt  */
  YYSYMBOL_match_entries = 110,            /* match_entries  */
  YYSYMBOL_match_entry = 111,              /* match_entry  */
  YYSYMBOL_match_key = 112,                /* match_key  */
  YYSYMBOL_key_defs = 113,                 /* key_defs  */
  YYSYMBOL_pipeline = 114,                 /* pipeline  */
  YYSYMBOL_stage_defs = 115,               /* stage_defs  */
  YYSYMBOL_stage_def = 116,                /* stage_def  */
  YYSYMBOL_stage_parser = 117,             /* stage_parser  */
  YYSYMBOL_stage_parser_headers = 118,     /* stage_parser_headers  */
  YYSYMBOL_stage_parser_header = 119,      /* stage_parser_header  */
  YYSYMBOL_stage_matcher = 120,            /* stage_matcher  */
  YYSYMBOL_operations = 121,               /* operations  */
  YYSYMBOL_switch_entries = 122,           /* switch_entries  */
  YYSYMBOL_switch_entry = 123,             /* switch_entry  */
  YYSYMBOL_switch_value = 124,             /* switch_value  */
  YYSYMBOL_stage_executor = 125,           /* stage_executor  */
  YYSYMBOL_stage_executor_entries = 126,   /* stage_executor_entries  */
  YYSYMBOL_stage_executor_entry = 127,     /* stage_executor_entry  */
  YYSYMBOL_stage_executor_entry_left = 128, /* stage_executor_entry_left  */
  YYSYMBOL_stage_name = 129                /* stage_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,     2,    65,     2,
      55,    56,    60,    62,    58,    63,    57,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    52,
      53,    61,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,    66,    51,    68,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   110,   113,   120,   128,   131,   138,   145,
     149,   157,   160,   167,   171,   178,   186,   189,   196,   203,
     210,   217,   221,   229,   232,   236,   243,   247,   254,   258,
     266,   269,   276,   280,   287,   291,   295,   299,   303,   307,
     311,   318,   326,   329,   336,   340,   348,   351,   355,   363,
     366,   373,   380,   384,   391,   395,   402,   406,   410,   414,
     418,   422,   426,   430,   434,   438,   442,   446,   450,   454,
     458,   465,   469,   473,   477,   481,   488,   496,   499,   506,
     513,   521,   524,   531,   538,   542,   546,   554,   557,   564,
     568,   572,   576,   580,   588,   591,   598,   602,   609,   617,
     620,   624,   631,   639,   642,   649,   656,   664,   667,   674,
     681,   689,   692,   696,   704,   707,   714,   721,   725,   729,
     733,   737,   744,   752,   755,   762,   769,   770,   774,   778,
     785,   786
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BIT", "STRUCT",
  "TRUE", "FALSE", "HEADER", "HEADERS", "PARSER", "STATE", "TRANSITION",
  "PACKET", "PACKET_IN", "DEFAULT", "ACCEPT", "EXTRACT", "SELECT",
  "ACTIONS", "ACTION", "NOACTION", "TABLES", "TABLE", "KEY", "SIZE",
  "DEFAULT_ACTION", "ENTRIES", "EXACT", "TERNARY", "LPM", "STAGE",
  "CONTROL", "MATCHER", "EXECUTOR", "SWITCH", "HIT", "MISS", "NONE",
  "IS_VALID", "VALUE_WIDTH", "EQU", "NEQ", "LEQ", "GEQ", "T_EOF",
  "ANDANDAND", "DIVDIVDIV", "IDENTIFIER", "VALUE_STRING", "VALUE_INT",
  "'{'", "'}'", "';'", "'<'", "'>'", "'('", "')'", "'.'", "','", "':'",
  "'*'", "'='", "'+'", "'-'", "'/'", "'&'", "'|'", "'^'", "'~'", "'!'",
  "$accept", "start", "header_defs", "header_def", "field_defs",
  "field_def", "type_def", "struct_defs", "struct_def", "parser_def",
  "state_defs", "state_def", "extract_stmt", "member", "transition_stmt",
  "fields", "direct_entry", "field", "transition_entries",
  "transition_entry", "key_def", "actions_def", "action_defs",
  "action_def", "parameters", "expressions", "expression", "lvalue",
  "operation", "op", "operand", "tables_def", "table_defs", "table_def",
  "table_key_def", "key_entries", "key_entry", "match_type",
  "table_optional_stmts", "table_optional_stmt", "match_entries",
  "match_entry", "match_key", "key_defs", "pipeline", "stage_defs",
  "stage_def", "stage_parser", "stage_parser_headers",
  "stage_parser_header", "stage_matcher", "operations", "switch_entries",
  "switch_entry", "switch_value", "stage_executor",
  "stage_executor_entries", "stage_executor_entry",
  "stage_executor_entry_left", "stage_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -163,    33,    27,  -163,   -22,  -163,    46,     9,     7,    30,
    -163,    26,  -163,    32,    35,    -8,    79,    53,    19,  -163,
    -163,    75,  -163,    83,    86,    88,  -163,  -163,    90,    96,
      24,    25,   132,   -12,  -163,    98,    86,    97,  -163,  -163,
     100,   101,    95,    -7,  -163,  -163,   -10,    99,  -163,   102,
     103,   105,   104,   106,   107,   111,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,   108,     5,   109,   -13,    -6,   110,  -163,
      69,   127,   116,  -163,  -163,   118,  -163,  -163,   115,   117,
       5,    91,  -163,   119,   121,  -163,  -163,  -163,   122,    84,
     144,   156,    43,  -163,   112,   113,   114,   123,  -163,  -163,
     126,   138,   124,   166,   125,  -163,  -163,  -163,  -163,   128,
      67,   129,    -4,   130,   134,  -163,   135,   146,   170,    14,
     136,   141,    18,  -163,   131,  -163,   139,   140,   142,  -163,
     143,    68,   159,   147,   145,   148,  -163,   149,  -163,   150,
    -163,   151,  -163,  -163,   125,  -163,    18,  -163,   153,  -163,
      93,  -163,  -163,  -163,    42,  -163,   154,   155,  -163,   157,
    -163,  -163,   152,   162,  -163,   -17,    38,  -163,  -163,  -163,
    -163,   158,  -163,     4,  -163,   160,  -163,  -163,    18,    48,
     161,   164,   165,    70,  -163,   168,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,    18,  -163,  -163,  -163,  -163,    92,  -163,  -163,
      74,    15,  -163,    78,  -163,  -163,  -163,  -163,   163,  -163,
     167,   169,   172,   174,   175,   162,   171,   173,   179,   181,
    -163,     4,   180,   182,   183,    18,  -163,    49,  -163,  -163,
     151,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,   184,    -3,     0,  -163,  -163,  -163,
     176,   186,   185,  -163,    11,   187,    94,   188,   189,  -163,
     190,   191,   192,  -163,   196,  -163,  -163,    22,   195,   202,
    -163,   194,   197,   198,   199,  -163,  -163,  -163,  -163
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    11,     1,     0,     4,     0,     0,     0,     0,
      12,     0,     6,     0,     0,     0,     0,     0,     0,     6,
       6,     0,    42,     0,     0,     0,    10,     5,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     7,     8,
       0,     0,     0,     0,    41,    43,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,    76,    78,   103,     9,
      14,    13,    16,     0,    46,     0,     0,     0,     0,    47,
       0,     0,     0,   102,   104,     0,    15,    17,     0,     0,
       0,     0,    87,     0,     0,    45,    49,    48,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    79,    88,
       0,     0,     0,     0,     0,    44,    52,    53,    50,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,    80,     0,    82,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,    27,     0,    26,     0,
      18,    20,    74,    75,    73,    72,     0,    71,     0,    54,
       0,    89,    92,    91,     0,    93,     0,     0,   108,     0,
     123,   105,     0,    23,    22,     0,     0,    51,    84,    85,
      86,     0,    90,    99,    95,     0,   109,   106,   111,     0,
       0,     0,     0,     0,    24,     0,    28,    65,    66,    69,
      70,    67,    68,    58,    56,    57,    59,    60,    61,    62,
      63,    64,     0,    83,    35,    36,    39,    34,    40,   100,
       0,     0,   112,     0,   129,   127,   128,   126,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,   122,     0,    20,    19,
       0,    30,    25,    29,    55,    37,    38,   101,    97,    96,
     114,   113,   131,   130,     0,     0,     0,   125,    21,    31,
       0,     0,     0,   115,     0,     0,     0,     0,     0,   110,
       0,     0,     0,   121,     0,    33,    32,     0,     0,     0,
     116,     0,     0,     0,     0,   120,   119,   117,   118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,   120,   -44,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,    36,  -163,  -163,  -163,  -162,  -163,  -163,
    -144,  -163,  -163,  -163,  -163,  -163,  -163,   -73,  -146,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,   177,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,     5,    18,    28,    29,     6,    10,    11,
      67,    77,   103,   106,   120,   183,   139,   107,   255,   259,
     209,    17,    33,    45,    70,    92,   108,   147,   148,   202,
     149,    24,    46,    57,    82,   110,   125,   171,    89,    99,
     154,   174,   175,   210,    36,    66,    74,   101,   131,   158,
     117,   213,   256,   263,   274,   134,   179,   219,   220,   254
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     166,   184,   204,   205,    75,   204,   205,    43,    25,   204,
     205,   206,    55,    53,   206,    13,   127,    72,   206,   109,
      69,   185,    25,   142,   143,     7,   267,    25,    25,   136,
     186,   137,   212,     3,     4,   232,    87,   124,    73,    44,
      54,    56,   281,   128,    16,    76,   207,    21,   258,   207,
       8,   261,    26,   207,    14,     9,   227,   208,   268,    12,
     208,   138,   233,   242,   208,   144,    26,   145,   214,   282,
      27,    26,    26,   146,    23,    40,    41,    15,   187,   188,
     189,   190,    19,   215,   216,    20,   252,   247,    32,   251,
     104,   191,   192,   172,   105,   217,   253,   173,   193,   218,
     194,   195,   196,   197,   198,   199,   200,   201,    94,    95,
      96,   260,   262,   270,   104,   156,   271,    35,   123,   157,
     168,   169,   170,    97,   272,    79,   224,    80,   225,    22,
     230,   273,   231,    34,   234,    98,   235,   228,   229,    30,
      31,    37,    38,    39,    42,    47,    49,    50,    51,    58,
      81,    52,    88,   100,    62,    60,    59,    61,    65,    71,
      78,    63,    64,    83,    68,    84,    85,    86,   102,    90,
     116,    91,    93,   111,   112,   113,   115,   119,   126,   133,
     129,   118,   121,   130,   114,   132,   135,   140,   141,   122,
     150,   151,   152,   159,   153,   155,   161,   160,   181,   180,
       0,     0,   164,   162,   163,   167,   176,   177,   165,   182,
     203,     0,   178,    48,     0,   236,   238,     0,   221,   211,
     222,   240,   223,   226,   239,   241,   237,   243,   245,   244,
     246,     0,   248,   250,   249,   264,   257,   265,     0,   269,
     275,   276,   283,     0,   266,   277,   278,   279,   280,   284,
     285,     0,     0,   286,   287,   288
};

static const yytype_int16 yycheck[] =
{
     146,   163,     5,     6,    10,     5,     6,    19,     3,     5,
       6,    14,    22,    20,    14,     8,    20,    30,    14,    92,
      64,    38,     3,     5,     6,    47,    15,     3,     3,    15,
      47,    17,   178,     0,     7,    20,    80,   110,    51,    51,
      47,    51,    20,    47,    18,    51,    49,    55,    51,    49,
       4,    51,    47,    49,    47,     9,   202,    60,    47,    50,
      60,    47,    47,   225,    60,    47,    47,    49,    20,    47,
      51,    47,    47,    55,    21,    51,    51,    47,    40,    41,
      42,    43,    50,    35,    36,    50,    37,   231,    13,   235,
      47,    53,    54,    51,    51,    47,    47,    55,    60,    51,
      62,    63,    64,    65,    66,    67,    68,    69,    24,    25,
      26,   255,   256,    19,    47,    47,    22,    31,    51,    51,
      27,    28,    29,    39,    30,    56,    56,    58,    58,    50,
      56,    37,    58,    50,    56,    51,    58,    45,    46,    19,
      20,    53,    52,    47,    12,    47,    49,    47,    47,    50,
      23,    56,    61,     9,    50,    52,    54,    52,    47,    50,
      50,    55,    55,    47,    56,    47,    51,    50,    12,    50,
      32,    50,    50,    61,    61,    61,    50,    11,    49,    33,
      50,    57,    57,    49,    61,    50,    16,    51,    47,    61,
      59,    52,    52,    34,    52,    52,    51,    50,   162,    47,
      -1,    -1,    52,    55,    55,    52,    52,    52,    57,    47,
      52,    -1,    55,    36,    -1,    52,    47,    -1,    57,    59,
      56,    47,    57,    55,    52,    50,    59,    56,    49,    56,
      49,    -1,    52,    50,    52,    59,    52,    51,    -1,    52,
      52,    52,    47,    -1,    59,    55,    55,    55,    52,    47,
      56,    -1,    -1,    56,    56,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    72,     0,     7,    73,    77,    47,     4,     9,
      78,    79,    50,     8,    47,    47,    18,    91,    74,    50,
      50,    55,    50,    21,   101,     3,    47,    51,    75,    76,
      74,    74,    13,    92,    50,    31,   114,    53,    52,    47,
      51,    51,    12,    19,    51,    93,   102,    47,   114,    49,
      47,    47,    56,    20,    47,    22,    51,   103,    50,    54,
      52,    52,    50,    55,    55,    47,   115,    80,    56,    75,
      94,    50,    30,    51,   116,    10,    51,    81,    50,    56,
      58,    23,   104,    47,    47,    51,    50,    75,    61,   108,
      50,    50,    95,    50,    24,    25,    26,    39,    51,   109,
       9,   117,    12,    82,    47,    51,    83,    87,    96,    97,
     105,    61,    61,    61,    61,    50,    32,   120,    57,    11,
      84,    57,    61,    51,    97,   106,    49,    20,    47,    50,
      49,   118,    50,    33,   125,    16,    15,    17,    47,    86,
      51,    47,     5,     6,    47,    49,    55,    97,    98,   100,
      59,    52,    52,    52,   110,    52,    47,    51,   119,    34,
      50,    51,    55,    55,    52,    57,    98,    52,    27,    28,
      29,   107,    51,    55,   111,   112,    52,    52,    55,   126,
      47,    83,    47,    85,    87,    38,    47,    40,    41,    42,
      43,    53,    54,    60,    62,    63,    64,    65,    66,    67,
      68,    69,    99,    52,     5,     6,    14,    49,    60,    90,
     113,    59,    98,   121,    20,    35,    36,    47,    51,   127,
     128,    57,    56,    57,    56,    58,    55,    98,    45,    46,
      56,    58,    20,    47,    56,    58,    52,    59,    47,    52,
      47,    50,    87,    56,    56,    49,    49,    90,    52,    52,
      50,    98,    37,    47,   129,    88,   122,    52,    51,    89,
      90,    51,    90,   123,    59,    51,    59,    15,    47,    52,
      19,    22,    30,    37,   124,    52,    52,    55,    55,    55,
      52,    20,    47,    47,    47,    56,    56,    56,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    79,    80,    80,    81,    82,
      83,    84,    84,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   102,   102,   103,
     104,   105,   105,   106,   107,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   113,
     113,   113,   114,   115,   115,   116,   117,   118,   118,   119,
     120,   121,   121,   121,   122,   122,   123,   124,   124,   124,
     124,   124,   125,   126,   126,   127,   128,   128,   128,   128,
     129,   129
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     0,     2,     5,     0,     3,     2,     4,
       1,     0,     2,     7,     7,     9,     0,     2,     6,     7,
       3,     8,     3,     0,     1,     3,     1,     1,     5,     7,
       0,     2,     4,     4,     1,     1,     1,     3,     3,     1,
       1,     4,     0,     2,     8,     6,     0,     1,     3,     0,
       2,     4,     1,     1,     1,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     0,     2,     6,
       5,     0,     2,     4,     1,     1,     1,     0,     2,     4,
       5,     4,     4,     4,     0,     2,     4,     4,     3,     0,
       1,     3,     5,     0,     2,     7,     5,     0,     2,     2,
      11,     0,     1,     3,     0,     2,     4,     4,     4,     4,
       4,     1,     5,     0,     2,     4,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: header_defs struct_defs parser_def actions_def tables_def pipeline pipeline  */
#line 101 "./yacc.y"
    {
        tree = std::make_unique<Rp4Ast>((yyvsp[-6].sv_header_defs), (yyvsp[-5].sv_struct_defs), (yyvsp[-4].sv_parser_def), (yyvsp[-3].sv_actions_def), (yyvsp[-2].sv_tables_def), (yyvsp[-1].sv_pipeline), (yyvsp[0].sv_pipeline));
        YYACCEPT;
    }
#line 1525 "./build/yacc.cpp"
    break;

  case 3: /* header_defs: %empty  */
#line 110 "./yacc.y"
    {
        (yyval.sv_header_defs) = {};
    }
#line 1533 "./build/yacc.cpp"
    break;

  case 4: /* header_defs: header_defs header_def  */
#line 114 "./yacc.y"
    {
        (yyval.sv_header_defs).push_back((yyvsp[0].sv_header_def));
    }
#line 1541 "./build/yacc.cpp"
    break;

  case 5: /* header_def: HEADER IDENTIFIER '{' field_defs '}'  */
#line 121 "./yacc.y"
    {
        (yyval.sv_header_def) = Rp4HeaderDef((yyvsp[-3].sv_str), (yyvsp[-1].sv_field_defs));
    }
#line 1549 "./build/yacc.cpp"
    break;

  case 6: /* field_defs: %empty  */
#line 128 "./yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
#line 1557 "./build/yacc.cpp"
    break;

  case 7: /* field_defs: field_defs field_def ';'  */
#line 132 "./yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[-1].sv_field_def));
    }
#line 1565 "./build/yacc.cpp"
    break;

  case 8: /* field_def: type_def IDENTIFIER  */
#line 139 "./yacc.y"
    {
        (yyval.sv_field_def) = Rp4FieldDef((yyvsp[-1].sv_type), (yyvsp[0].sv_str));
    }
#line 1573 "./build/yacc.cpp"
    break;

  case 9: /* type_def: BIT '<' VALUE_INT '>'  */
#line 146 "./yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4BitType>((yyvsp[-1].sv_int));
    }
#line 1581 "./build/yacc.cpp"
    break;

  case 10: /* type_def: IDENTIFIER  */
#line 150 "./yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4NamedType>((yyvsp[0].sv_str));
    }
#line 1589 "./build/yacc.cpp"
    break;

  case 11: /* struct_defs: %empty  */
#line 157 "./yacc.y"
    {
        (yyval.sv_struct_defs) = {};
    }
#line 1597 "./build/yacc.cpp"
    break;

  case 12: /* struct_defs: struct_defs struct_def  */
#line 161 "./yacc.y"
    {
        (yyval.sv_struct_defs).push_back((yyvsp[0].sv_struct_def));
    }
#line 1605 "./build/yacc.cpp"
    break;

  case 13: /* struct_def: STRUCT IDENTIFIER '{' field_defs '}' IDENTIFIER ';'  */
#line 168 "./yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef((yyvsp[-5].sv_str), (yyvsp[-3].sv_field_defs), (yyvsp[-1].sv_str));
    }
#line 1613 "./build/yacc.cpp"
    break;

  case 14: /* struct_def: STRUCT HEADERS '{' field_defs '}' IDENTIFIER ';'  */
#line 172 "./yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef("headers", (yyvsp[-3].sv_field_defs), (yyvsp[-1].sv_str), true);
    }
#line 1621 "./build/yacc.cpp"
    break;

  case 15: /* parser_def: PARSER IDENTIFIER '(' PACKET_IN PACKET ')' '{' state_defs '}'  */
#line 179 "./yacc.y"
    {
        (yyval.sv_parser_def) = Rp4ParserDef((yyvsp[-7].sv_str), (yyvsp[-1].sv_state_defs));
    }
#line 1629 "./build/yacc.cpp"
    break;

  case 16: /* state_defs: %empty  */
#line 186 "./yacc.y"
    {
        (yyval.sv_state_defs) = {};
    }
#line 1637 "./build/yacc.cpp"
    break;

  case 17: /* state_defs: state_defs state_def  */
#line 190 "./yacc.y"
    {
        (yyval.sv_state_defs).push_back((yyvsp[0].sv_state_def));
    }
#line 1645 "./build/yacc.cpp"
    break;

  case 18: /* state_def: STATE IDENTIFIER '{' extract_stmt transition_stmt '}'  */
#line 197 "./yacc.y"
    {
        (yyval.sv_state_def) = Rp4StateDef((yyvsp[-4].sv_str), (yyvsp[-2].sv_extract_stmt), (yyvsp[-1].sv_transition_stmt));
    }
#line 1653 "./build/yacc.cpp"
    break;

  case 19: /* extract_stmt: PACKET '.' EXTRACT '(' member ')' ';'  */
#line 204 "./yacc.y"
    {
        (yyval.sv_extract_stmt) = Rp4Extract((yyvsp[-2].sv_member));
    }
#line 1661 "./build/yacc.cpp"
    break;

  case 20: /* member: IDENTIFIER '.' IDENTIFIER  */
#line 211 "./yacc.y"
    {
        (yyval.sv_member) = Rp4Member((yyvsp[-2].sv_str), (yyvsp[0].sv_str));
    }
#line 1669 "./build/yacc.cpp"
    break;

  case 21: /* transition_stmt: TRANSITION SELECT '(' fields ')' '{' transition_entries '}'  */
#line 218 "./yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4SelectTransition>((yyvsp[-4].sv_fields), (yyvsp[-1].sv_transition_entries));
    }
#line 1677 "./build/yacc.cpp"
    break;

  case 22: /* transition_stmt: TRANSITION direct_entry ';'  */
#line 222 "./yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4DirectTransition>((yyvsp[-1].sv_transition_entry));
    }
#line 1685 "./build/yacc.cpp"
    break;

  case 23: /* fields: %empty  */
#line 229 "./yacc.y"
    {
        (yyval.sv_fields) = {};
    }
#line 1693 "./build/yacc.cpp"
    break;

  case 24: /* fields: field  */
#line 233 "./yacc.y"
    {
        (yyval.sv_fields) = { (yyvsp[0].sv_field) };
    }
#line 1701 "./build/yacc.cpp"
    break;

  case 25: /* fields: fields ',' field  */
#line 237 "./yacc.y"
    {
        (yyval.sv_fields).push_back((yyvsp[0].sv_field));
    }
#line 1709 "./build/yacc.cpp"
    break;

  case 26: /* direct_entry: IDENTIFIER  */
#line 244 "./yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), (yyvsp[0].sv_str));
    }
#line 1717 "./build/yacc.cpp"
    break;

  case 27: /* direct_entry: ACCEPT  */
#line 248 "./yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), "accept", 0);
    }
#line 1725 "./build/yacc.cpp"
    break;

  case 28: /* field: IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER  */
#line 255 "./yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[-4].sv_str), (yyvsp[-2].sv_str), (yyvsp[0].sv_str));
    }
#line 1733 "./build/yacc.cpp"
    break;

  case 29: /* field: IDENTIFIER '.' IDENTIFIER '.' IS_VALID '(' ')'  */
#line 259 "./yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[-6].sv_str), (yyvsp[-4].sv_str), "isValid");
    }
#line 1741 "./build/yacc.cpp"
    break;

  case 30: /* transition_entries: %empty  */
#line 266 "./yacc.y"
    {
        (yyval.sv_transition_entries) = {};
    }
#line 1749 "./build/yacc.cpp"
    break;

  case 31: /* transition_entries: transition_entries transition_entry  */
#line 270 "./yacc.y"
    {
        (yyval.sv_transition_entries).push_back((yyvsp[0].sv_transition_entry));
    }
#line 1757 "./build/yacc.cpp"
    break;

  case 32: /* transition_entry: key_def ':' IDENTIFIER ';'  */
#line 277 "./yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[-3].sv_key), (yyvsp[-1].sv_str));
    }
#line 1765 "./build/yacc.cpp"
    break;

  case 33: /* transition_entry: key_def ':' ACCEPT ';'  */
#line 281 "./yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[-3].sv_key), "accept", 0);
    }
#line 1773 "./build/yacc.cpp"
    break;

  case 34: /* key_def: VALUE_INT  */
#line 288 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>((yyvsp[0].sv_int));
    }
#line 1781 "./build/yacc.cpp"
    break;

  case 35: /* key_def: TRUE  */
#line 292 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(1);
    }
#line 1789 "./build/yacc.cpp"
    break;

  case 36: /* key_def: FALSE  */
#line 296 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(0);
    }
#line 1797 "./build/yacc.cpp"
    break;

  case 37: /* key_def: VALUE_INT ANDANDAND VALUE_INT  */
#line 300 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4TernaryKey>((yyvsp[-2].sv_int), (yyvsp[0].sv_int));
    }
#line 1805 "./build/yacc.cpp"
    break;

  case 38: /* key_def: VALUE_INT DIVDIVDIV VALUE_INT  */
#line 304 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4LpmKey>((yyvsp[-2].sv_int), (yyvsp[0].sv_int));
    }
#line 1813 "./build/yacc.cpp"
    break;

  case 39: /* key_def: DEFAULT  */
#line 308 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
#line 1821 "./build/yacc.cpp"
    break;

  case 40: /* key_def: '*'  */
#line 312 "./yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
#line 1829 "./build/yacc.cpp"
    break;

  case 41: /* actions_def: ACTIONS '{' action_defs '}'  */
#line 319 "./yacc.y"
    {
        (yyval.sv_actions_def) = Rp4ActionsDef((yyvsp[-1].sv_action_defs));
    }
#line 1837 "./build/yacc.cpp"
    break;

  case 42: /* action_defs: %empty  */
#line 326 "./yacc.y"
    {
        (yyval.sv_action_defs) = {};
    }
#line 1845 "./build/yacc.cpp"
    break;

  case 43: /* action_defs: action_defs action_def  */
#line 330 "./yacc.y"
    {
        (yyval.sv_action_defs).push_back((yyvsp[0].sv_action_def));
    }
#line 1853 "./build/yacc.cpp"
    break;

  case 44: /* action_def: ACTION IDENTIFIER '(' parameters ')' '{' expressions '}'  */
#line 337 "./yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef((yyvsp[-6].sv_str), (yyvsp[-4].sv_field_defs), (yyvsp[-1].sv_expressions));
    }
#line 1861 "./build/yacc.cpp"
    break;

  case 45: /* action_def: ACTION NOACTION '(' ')' '{' '}'  */
#line 341 "./yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef("NoAction", {}, {}, true);
    }
#line 1869 "./build/yacc.cpp"
    break;

  case 46: /* parameters: %empty  */
#line 348 "./yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
#line 1877 "./build/yacc.cpp"
    break;

  case 47: /* parameters: field_def  */
#line 352 "./yacc.y"
    {
        (yyval.sv_field_defs) = { (yyvsp[0].sv_field_def) };
    }
#line 1885 "./build/yacc.cpp"
    break;

  case 48: /* parameters: parameters ',' field_def  */
#line 356 "./yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[0].sv_field_def));
    }
#line 1893 "./build/yacc.cpp"
    break;

  case 49: /* expressions: %empty  */
#line 363 "./yacc.y"
    {
        (yyval.sv_expressions) = {};
    }
#line 1901 "./build/yacc.cpp"
    break;

  case 50: /* expressions: expressions expression  */
#line 367 "./yacc.y"
    {
        (yyval.sv_expressions).push_back((yyvsp[0].sv_expression));
    }
#line 1909 "./build/yacc.cpp"
    break;

  case 51: /* expression: lvalue '=' operation ';'  */
#line 374 "./yacc.y"
    {
        (yyval.sv_expression) = Rp4Expression((yyvsp[-3].sv_lvalue), (yyvsp[-1].sv_operation));
    }
#line 1917 "./build/yacc.cpp"
    break;

  case 52: /* lvalue: member  */
#line 381 "./yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4MetaLValue>((yyvsp[0].sv_member));
    }
#line 1925 "./build/yacc.cpp"
    break;

  case 53: /* lvalue: field  */
#line 385 "./yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4HeaderLValue>((yyvsp[0].sv_field));
    }
#line 1933 "./build/yacc.cpp"
    break;

  case 54: /* operation: operand  */
#line 392 "./yacc.y"
    {
        (yyval.sv_operation) = std::move((yyvsp[0].sv_operand));
    }
#line 1941 "./build/yacc.cpp"
    break;

  case 55: /* operation: '(' operation op operation ')'  */
#line 396 "./yacc.y"
    {
        (yyval.sv_operation) = std::make_shared<Rp4Binary>((yyvsp[-2].sv_op), (yyvsp[-3].sv_operation), (yyvsp[-1].sv_operation));
    }
#line 1949 "./build/yacc.cpp"
    break;

  case 56: /* op: '+'  */
#line 403 "./yacc.y"
    {
        (yyval.sv_op) = OP_PLUS;
    }
#line 1957 "./build/yacc.cpp"
    break;

  case 57: /* op: '-'  */
#line 407 "./yacc.y"
    {
        (yyval.sv_op) = OP_MINUS;
    }
#line 1965 "./build/yacc.cpp"
    break;

  case 58: /* op: '*'  */
#line 411 "./yacc.y"
    {
        (yyval.sv_op) = OP_MUL;
    }
#line 1973 "./build/yacc.cpp"
    break;

  case 59: /* op: '/'  */
#line 415 "./yacc.y"
    {
        (yyval.sv_op) = OP_DIV;
    }
#line 1981 "./build/yacc.cpp"
    break;

  case 60: /* op: '&'  */
#line 419 "./yacc.y"
    {
        (yyval.sv_op) = OP_AND;
    }
#line 1989 "./build/yacc.cpp"
    break;

  case 61: /* op: '|'  */
#line 423 "./yacc.y"
    {
        (yyval.sv_op) = OP_OR;
    }
#line 1997 "./build/yacc.cpp"
    break;

  case 62: /* op: '^'  */
#line 427 "./yacc.y"
    {
        (yyval.sv_op) = OP_XOR;
    }
#line 2005 "./build/yacc.cpp"
    break;

  case 63: /* op: '~'  */
#line 431 "./yacc.y"
    {
        (yyval.sv_op) = OP_NOT;
    }
#line 2013 "./build/yacc.cpp"
    break;

  case 64: /* op: '!'  */
#line 435 "./yacc.y"
    {
        (yyval.sv_op) = OP_NOTL;
    }
#line 2021 "./build/yacc.cpp"
    break;

  case 65: /* op: EQU  */
#line 439 "./yacc.y"
    {
        (yyval.sv_op) = OP_EQ;
    }
#line 2029 "./build/yacc.cpp"
    break;

  case 66: /* op: NEQ  */
#line 443 "./yacc.y"
    {
        (yyval.sv_op) = OP_NE;
    }
#line 2037 "./build/yacc.cpp"
    break;

  case 67: /* op: '<'  */
#line 447 "./yacc.y"
    {
        (yyval.sv_op) = OP_LT;
    }
#line 2045 "./build/yacc.cpp"
    break;

  case 68: /* op: '>'  */
#line 451 "./yacc.y"
    {
        (yyval.sv_op) = OP_GT;
    }
#line 2053 "./build/yacc.cpp"
    break;

  case 69: /* op: LEQ  */
#line 455 "./yacc.y"
    {
        (yyval.sv_op) = OP_LE;
    }
#line 2061 "./build/yacc.cpp"
    break;

  case 70: /* op: GEQ  */
#line 459 "./yacc.y"
    {
        (yyval.sv_op) = OP_GE;
    }
#line 2069 "./build/yacc.cpp"
    break;

  case 71: /* operand: lvalue  */
#line 466 "./yacc.y"
    {
        (yyval.sv_operand) = std::move((yyvsp[0].sv_lvalue));
    }
#line 2077 "./build/yacc.cpp"
    break;

  case 72: /* operand: VALUE_INT  */
#line 470 "./yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>((yyvsp[0].sv_int));
    }
#line 2085 "./build/yacc.cpp"
    break;

  case 73: /* operand: IDENTIFIER  */
#line 474 "./yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Parameter>((yyvsp[0].sv_str));
    }
#line 2093 "./build/yacc.cpp"
    break;

  case 74: /* operand: TRUE  */
#line 478 "./yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(1);
    }
#line 2101 "./build/yacc.cpp"
    break;

  case 75: /* operand: FALSE  */
#line 482 "./yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(0);
    }
#line 2109 "./build/yacc.cpp"
    break;

  case 76: /* tables_def: TABLES '{' table_defs '}'  */
#line 489 "./yacc.y"
    {
        (yyval.sv_tables_def) = Rp4TablesDef((yyvsp[-1].sv_table_defs));
    }
#line 2117 "./build/yacc.cpp"
    break;

  case 77: /* table_defs: %empty  */
#line 496 "./yacc.y"
    {
        (yyval.sv_table_defs) = {};
    }
#line 2125 "./build/yacc.cpp"
    break;

  case 78: /* table_defs: table_defs table_def  */
#line 500 "./yacc.y"
    {
        (yyval.sv_table_defs).push_back((yyvsp[0].sv_table_def));
    }
#line 2133 "./build/yacc.cpp"
    break;

  case 79: /* table_def: TABLE IDENTIFIER '{' table_key_def table_optional_stmts '}'  */
#line 507 "./yacc.y"
    {
        (yyval.sv_table_def) = Rp4TableDef((yyvsp[-4].sv_str), (yyvsp[-2].sv_table_key_def), (yyvsp[-1].sv_table_optional_stmts));
    }
#line 2141 "./build/yacc.cpp"
    break;

  case 80: /* table_key_def: KEY '=' '{' key_entries '}'  */
#line 514 "./yacc.y"
    {
        (yyval.sv_table_key_def) = Rp4TableKeyDef((yyvsp[-1].sv_key_entries));
    }
#line 2149 "./build/yacc.cpp"
    break;

  case 81: /* key_entries: %empty  */
#line 521 "./yacc.y"
    {
        (yyval.sv_key_entries) = {};
    }
#line 2157 "./build/yacc.cpp"
    break;

  case 82: /* key_entries: key_entries key_entry  */
#line 525 "./yacc.y"
    {
        (yyval.sv_key_entries).push_back((yyvsp[0].sv_key_entry));
    }
#line 2165 "./build/yacc.cpp"
    break;

  case 83: /* key_entry: lvalue ':' match_type ';'  */
#line 532 "./yacc.y"
    {
        (yyval.sv_key_entry) = Rp4KeyEntry((yyvsp[-3].sv_lvalue), (yyvsp[-1].sv_match_type));
    }
#line 2173 "./build/yacc.cpp"
    break;

  case 84: /* match_type: EXACT  */
#line 539 "./yacc.y"
    {
        (yyval.sv_match_type) = MT_EXACT;
    }
#line 2181 "./build/yacc.cpp"
    break;

  case 85: /* match_type: TERNARY  */
#line 543 "./yacc.y"
    {
        (yyval.sv_match_type) = MT_TERNARY;
    }
#line 2189 "./build/yacc.cpp"
    break;

  case 86: /* match_type: LPM  */
#line 547 "./yacc.y"
    {
        (yyval.sv_match_type) = MT_LPM;
    }
#line 2197 "./build/yacc.cpp"
    break;

  case 87: /* table_optional_stmts: %empty  */
#line 554 "./yacc.y"
    {
        (yyval.sv_table_optional_stmts) = {};
    }
#line 2205 "./build/yacc.cpp"
    break;

  case 88: /* table_optional_stmts: table_optional_stmts table_optional_stmt  */
#line 558 "./yacc.y"
    {
        (yyval.sv_table_optional_stmts).push_back((yyvsp[0].sv_table_optional_stmt));
    }
#line 2213 "./build/yacc.cpp"
    break;

  case 89: /* table_optional_stmt: SIZE '=' VALUE_INT ';'  */
#line 565 "./yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableSizeStmt>((yyvsp[-1].sv_int));
    }
#line 2221 "./build/yacc.cpp"
    break;

  case 90: /* table_optional_stmt: ENTRIES '=' '{' match_entries '}'  */
#line 569 "./yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableEntriesStmt>((yyvsp[-1].sv_match_entries));
    }
#line 2229 "./build/yacc.cpp"
    break;

  case 91: /* table_optional_stmt: DEFAULT_ACTION '=' IDENTIFIER ';'  */
#line 573 "./yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>((yyvsp[-1].sv_str));
    }
#line 2237 "./build/yacc.cpp"
    break;

  case 92: /* table_optional_stmt: DEFAULT_ACTION '=' NOACTION ';'  */
#line 577 "./yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>("NoAction");
    }
#line 2245 "./build/yacc.cpp"
    break;

  case 93: /* table_optional_stmt: VALUE_WIDTH '=' VALUE_INT ';'  */
#line 581 "./yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableValueWidthStmt>((yyvsp[-1].sv_int));
    }
#line 2253 "./build/yacc.cpp"
    break;

  case 94: /* match_entries: %empty  */
#line 588 "./yacc.y"
    {
        (yyval.sv_match_entries) = {};
    }
#line 2261 "./build/yacc.cpp"
    break;

  case 95: /* match_entries: match_entries match_entry  */
#line 592 "./yacc.y"
    {
        (yyval.sv_match_entries).push_back((yyvsp[0].sv_match_entry));
    }
#line 2269 "./build/yacc.cpp"
    break;

  case 96: /* match_entry: match_key ':' IDENTIFIER ';'  */
#line 599 "./yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[-3].sv_match_key), (yyvsp[-1].sv_str));
    }
#line 2277 "./build/yacc.cpp"
    break;

  case 97: /* match_entry: match_key ':' NOACTION ';'  */
#line 603 "./yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[-3].sv_match_key), "NoAction");
    }
#line 2285 "./build/yacc.cpp"
    break;

  case 98: /* match_key: '(' key_defs ')'  */
#line 610 "./yacc.y"
    {
        (yyval.sv_match_key) = Rp4MatchKey((yyvsp[-1].sv_keys));
    }
#line 2293 "./build/yacc.cpp"
    break;

  case 99: /* key_defs: %empty  */
#line 617 "./yacc.y"
    {
        (yyval.sv_keys) = {};
    }
#line 2301 "./build/yacc.cpp"
    break;

  case 100: /* key_defs: key_def  */
#line 621 "./yacc.y"
    {
        (yyval.sv_keys) = { (yyvsp[0].sv_key) };
    }
#line 2309 "./build/yacc.cpp"
    break;

  case 101: /* key_defs: key_defs ',' key_def  */
#line 625 "./yacc.y"
    {
        (yyval.sv_keys).push_back((yyvsp[0].sv_key));
    }
#line 2317 "./build/yacc.cpp"
    break;

  case 102: /* pipeline: CONTROL IDENTIFIER '{' stage_defs '}'  */
#line 632 "./yacc.y"
    {
        (yyval.sv_pipeline) = Rp4Pipeline((yyvsp[-3].sv_str), (yyvsp[-1].sv_stage_defs));
    }
#line 2325 "./build/yacc.cpp"
    break;

  case 103: /* stage_defs: %empty  */
#line 639 "./yacc.y"
    {
        (yyval.sv_stage_defs) = {};
    }
#line 2333 "./build/yacc.cpp"
    break;

  case 104: /* stage_defs: stage_defs stage_def  */
#line 643 "./yacc.y"
    {
        (yyval.sv_stage_defs).push_back((yyvsp[0].sv_stage_def));
    }
#line 2341 "./build/yacc.cpp"
    break;

  case 105: /* stage_def: STAGE IDENTIFIER '{' stage_parser stage_matcher stage_executor '}'  */
#line 650 "./yacc.y"
    {
        (yyval.sv_stage_def) = Rp4StageDef((yyvsp[-5].sv_str), (yyvsp[-3].sv_stage_parser), (yyvsp[-2].sv_stage_matcher), (yyvsp[-1].sv_stage_executor));
    }
#line 2349 "./build/yacc.cpp"
    break;

  case 106: /* stage_parser: PARSER '{' stage_parser_headers '}' ';'  */
#line 657 "./yacc.y"
    {
        (yyval.sv_stage_parser) = Rp4StageParser((yyvsp[-2].sv_stage_parser_headers));
    }
#line 2357 "./build/yacc.cpp"
    break;

  case 107: /* stage_parser_headers: %empty  */
#line 664 "./yacc.y"
    {
        (yyval.sv_stage_parser_headers) = {};
    }
#line 2365 "./build/yacc.cpp"
    break;

  case 108: /* stage_parser_headers: stage_parser_headers stage_parser_header  */
#line 668 "./yacc.y"
    {
        (yyval.sv_stage_parser_headers).push_back((yyvsp[0].sv_stage_parser_header));
    }
#line 2373 "./build/yacc.cpp"
    break;

  case 109: /* stage_parser_header: IDENTIFIER ';'  */
#line 675 "./yacc.y"
    {
        (yyval.sv_stage_parser_header) = Rp4StageParserHeader((yyvsp[-1].sv_str));
    }
#line 2381 "./build/yacc.cpp"
    break;

  case 110: /* stage_matcher: MATCHER '{' SWITCH '(' operations ')' '{' switch_entries '}' '}' ';'  */
#line 682 "./yacc.y"
    {
        (yyval.sv_stage_matcher) = Rp4StageMatcher((yyvsp[-6].sv_operations), (yyvsp[-3].sv_switch_entries));
    }
#line 2389 "./build/yacc.cpp"
    break;

  case 111: /* operations: %empty  */
#line 689 "./yacc.y"
    {
        (yyval.sv_operations) = {};
    }
#line 2397 "./build/yacc.cpp"
    break;

  case 112: /* operations: operation  */
#line 693 "./yacc.y"
    {
        (yyval.sv_operations) = { (yyvsp[0].sv_operation) };
    }
#line 2405 "./build/yacc.cpp"
    break;

  case 113: /* operations: operations ',' operation  */
#line 697 "./yacc.y"
    {
        (yyval.sv_operations).push_back((yyvsp[0].sv_operation));
    }
#line 2413 "./build/yacc.cpp"
    break;

  case 114: /* switch_entries: %empty  */
#line 704 "./yacc.y"
    {
        (yyval.sv_switch_entries) = {};
    }
#line 2421 "./build/yacc.cpp"
    break;

  case 115: /* switch_entries: switch_entries switch_entry  */
#line 708 "./yacc.y"
    {
        (yyval.sv_switch_entries).push_back((yyvsp[0].sv_switch_entry));
    }
#line 2429 "./build/yacc.cpp"
    break;

  case 116: /* switch_entry: key_def ':' switch_value ';'  */
#line 715 "./yacc.y"
    {
        (yyval.sv_switch_entry) = Rp4SwitchEntry((yyvsp[-3].sv_key), (yyvsp[-1].sv_switch_value));
    }
#line 2437 "./build/yacc.cpp"
    break;

  case 117: /* switch_value: TABLE '(' IDENTIFIER ')'  */
#line 722 "./yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchTableStmt>((yyvsp[-1].sv_str));
    }
#line 2445 "./build/yacc.cpp"
    break;

  case 118: /* switch_value: STAGE '(' IDENTIFIER ')'  */
#line 726 "./yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchStageStmt>((yyvsp[-1].sv_str));
    }
#line 2453 "./build/yacc.cpp"
    break;

  case 119: /* switch_value: ACTION '(' IDENTIFIER ')'  */
#line 730 "./yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>((yyvsp[-1].sv_str));
    }
#line 2461 "./build/yacc.cpp"
    break;

  case 120: /* switch_value: ACTION '(' NOACTION ')'  */
#line 734 "./yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>("NoAction");
    }
#line 2469 "./build/yacc.cpp"
    break;

  case 121: /* switch_value: NONE  */
#line 738 "./yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchStageStmt>("None", true);
    }
#line 2477 "./build/yacc.cpp"
    break;

  case 122: /* stage_executor: EXECUTOR '{' stage_executor_entries '}' ';'  */
#line 745 "./yacc.y"
    {
        (yyval.sv_stage_executor) = Rp4StageExecutor((yyvsp[-2].sv_stage_executor_entries));
    }
#line 2485 "./build/yacc.cpp"
    break;

  case 123: /* stage_executor_entries: %empty  */
#line 752 "./yacc.y"
    {
        (yyval.sv_stage_executor_entries) = {};
    }
#line 2493 "./build/yacc.cpp"
    break;

  case 124: /* stage_executor_entries: stage_executor_entries stage_executor_entry  */
#line 756 "./yacc.y"
    {
        (yyval.sv_stage_executor_entries).push_back((yyvsp[0].sv_stage_executor_entry));
    }
#line 2501 "./build/yacc.cpp"
    break;

  case 125: /* stage_executor_entry: stage_executor_entry_left ':' stage_name ';'  */
#line 763 "./yacc.y"
    {
        (yyval.sv_stage_executor_entry) = Rp4StageExecutorEntry((yyvsp[-3].sv_str), (yyvsp[-1].sv_str));
    }
#line 2509 "./build/yacc.cpp"
    break;

  case 127: /* stage_executor_entry_left: HIT  */
#line 771 "./yacc.y"
    {
        (yyval.sv_str) = "__HIT__";
    }
#line 2517 "./build/yacc.cpp"
    break;

  case 128: /* stage_executor_entry_left: MISS  */
#line 775 "./yacc.y"
    {
        (yyval.sv_str) = "__MISS__";
    }
#line 2525 "./build/yacc.cpp"
    break;

  case 129: /* stage_executor_entry_left: NOACTION  */
#line 779 "./yacc.y"
    {
        (yyval.sv_str) = "NoAction";
    }
#line 2533 "./build/yacc.cpp"
    break;

  case 131: /* stage_name: NONE  */
#line 787 "./yacc.y"
    {
        (yyval.sv_str) = "None";
    }
#line 2541 "./build/yacc.cpp"
    break;


#line 2545 "./build/yacc.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 792 "./yacc.y"
