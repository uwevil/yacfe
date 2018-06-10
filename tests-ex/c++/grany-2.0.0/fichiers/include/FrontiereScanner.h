#ifndef FLEX_HEADER_FrontiereScanner_h
#define FLEX_HEADER_FrontiereScanner_h
#define YY_FrontiereScanner_CHAR unsigned char
#line 1 "/tmp/flex++/tools/lib/flexskel.h"
/* A lexical scanner header generated by flex */
/* MODIFIED FOR C++ CLASS BY Alain Coetmeur: coetmeur(at)icdc.fr */
/* Note that (at) mean the 'at' symbol that I cannot write */
/* because it is expanded to the class name */
/* made at Informatique-CDC, Research&development department */
/* company from the Caisse Des Depots et Consignations */


/*********************************************/
/* SYSTEM dependent declaration, includes... */
/*********************************************/
/* cfront 1.2 defines "c_plusplus" instead of "__cplusplus" */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif
#ifdef __cplusplus
#ifndef YY_USE_PROTOS
#define YY_USE_PROTOS
#endif
#ifndef YY_USE_CLASS
#define YY_USE_CLASS
#endif
#else	/* ! __cplusplus */
#ifdef __STDC__
#ifdef __GNUC__
#else
#endif	/* __GNUC__ */
#ifndef YY_USE_PROTOS
#define YY_USE_PROTOS
#endif
#endif	/* __STDC__ */
#endif	/* ! __cplusplus */
/*********************************************/
/* COMPILER DEPENDENT   MACROS               */
/*********************************************/
/* use prototypes in function declarations */
#ifndef YY_PROTO
#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
#endif
#endif
#include <stdio.h>




/* % here is the declaration from section1 %header{  */ 
#line 18 "FrontiereScanner.l"
#define YY_FrontiereScanner_LEX_PARAM  YY_FrontiereParser_STYPE *val,YY_FrontiereParser_LTYPE *loc
#line 19 "FrontiereScanner.l"
#define YY_FrontiereScanner_IOSTREAM 
#line 20 "FrontiereScanner.l"
#define YY_FrontiereScanner_MEMBERS  \
   public: \
      int _ligne, _colonne; \
      void beginAction();
#line 25 "FrontiereScanner.l"
#define YY_FrontiereScanner_CONSTRUCTOR_INIT  : _ligne(1), _colonne(1)
#line 28 "FrontiereScanner.l"
#include "FrontiereParser.h"

#define YY_USER_ACTION beginAction();
#line 43 "FrontiereScanner.l"
#line 52 "/tmp/flex++/tools/lib/flexskel.h"

#ifdef YY_USE_CLASS
#ifdef YY_FrontiereScanner_IOSTREAM
#include <iostream>
#define YY_FrontiereScanner_IFILE  istream
#define YY_FrontiereScanner_OFILE ostream 
#define YY_FrontiereScanner_ERRFILE cerr

#ifndef YY_FrontiereScanner_IFILE_DEFAULT
#define YY_FrontiereScanner_IFILE_DEFAULT &cin
#endif

#ifndef YY_FrontiereScanner_OFILE_DEFAULT
#define YY_FrontiereScanner_OFILE_DEFAULT &cout
#endif

#endif
#endif

#ifndef YY_FrontiereScanner_IFILE
#define YY_FrontiereScanner_IFILE FILE 
#endif

#ifndef YY_FrontiereScanner_OFILE
#define YY_FrontiereScanner_OFILE FILE 
#endif

#ifndef YY_FrontiereScanner_ERRFILE
#define YY_FrontiereScanner_ERRFILE stderr
#endif

#ifndef YY_FrontiereScanner_IFILE_DEFAULT
#define YY_FrontiereScanner_IFILE_DEFAULT stdin
#endif

#ifndef YY_FrontiereScanner_OFILE_DEFAULT
#define YY_FrontiereScanner_OFILE_DEFAULT stdout
#endif




#ifndef YY_FrontiereScanner_TEXT
#define YY_FrontiereScanner_TEXT yytext
#endif
#ifndef YY_FrontiereScanner_LENG
#define YY_FrontiereScanner_LENG yyleng
#endif
#ifndef YY_FrontiereScanner_IN
#define YY_FrontiereScanner_IN yyin
#endif
#ifndef YY_FrontiereScanner_OUT
#define YY_FrontiereScanner_OUT yyout
#endif

#ifndef YY_FrontiereScanner_LEX_RETURN
#define YY_FrontiereScanner_LEX_RETURN int
#else
#ifndef YY_FrontiereScanner_LEX_DEFINED
#define YY_FrontiereScanner_LEX_DEFINED 
#endif
#endif

#ifndef YY_FrontiereScanner_LEX
#define YY_FrontiereScanner_LEX yylex
#else
#ifndef YY_FrontiereScanner_LEX_DEFINED
#define YY_FrontiereScanner_LEX_DEFINED 
#endif
#endif

#ifndef YY_FrontiereScanner_LEX_PARAM
#ifndef YY_USE_PROTOS
#define YY_FrontiereScanner_LEX_PARAM 
#else
#define YY_FrontiereScanner_LEX_PARAM void
#endif
#else
#ifndef YY_FrontiereScanner_LEX_DEFINED
#define YY_FrontiereScanner_LEX_DEFINED 
#endif
#endif

#ifndef YY_FrontiereScanner_LEX_PARAM_DEF
#define YY_FrontiereScanner_LEX_PARAM_DEF
#else
#ifndef YY_FrontiereScanner_LEX_DEFINED
#define YY_FrontiereScanner_LEX_DEFINED 
#endif
#endif

#ifndef YY_FrontiereScanner_RESTART
#define YY_FrontiereScanner_RESTART yyrestart
#endif
#ifndef YY_FrontiereScanner_SWITCH_TO_BUFFER
#define YY_FrontiereScanner_SWITCH_TO_BUFFER yy_switch_to_buffer
#endif
#ifndef YY_FrontiereScanner_LOAD_BUFFER_STATE
#define YY_FrontiereScanner_LOAD_BUFFER_STATE yy_load_buffer_state
#endif

#ifndef YY_FrontiereScanner_CREATE_BUFFER
#define YY_FrontiereScanner_CREATE_BUFFER yy_create_buffer
#ifndef YY_USE_CLASS
#ifndef yy_new_buffer
#define yy_new_buffer yy_create_buffer
#endif
#endif
#endif
#ifndef YY_FrontiereScanner_DELETE_BUFFER
#define YY_FrontiereScanner_DELETE_BUFFER yy_delete_buffer
#endif
#ifndef YY_FrontiereScanner_INIT_BUFFER
#define YY_FrontiereScanner_INIT_BUFFER yy_init_buffer
#endif



#ifdef YY_FrontiereScanner_FLEX_DEBUG
#ifndef YY_FrontiereScanner_DEBUG
#define YY_FrontiereScanner_DEBUG 1
#endif
#else
#ifndef YY_FrontiereScanner_DEBUG
#define YY_FrontiereScanner_DEBUG 0
#endif
#endif

#if YY_FrontiereScanner_DEBUG != 0
#ifndef YY_FrontiereScanner_DEBUG_FLAG
#define YY_FrontiereScanner_DEBUG_FLAG yy_flex_debug
#endif
#ifndef YY_FrontiereScanner_DEBUG_INIT
#define YY_FrontiereScanner_DEBUG_INIT 1
#endif
#endif




#ifndef YY_USE_CLASS
#ifndef YY_FrontiereScanner_CURRENT_BUFFER
#define YY_FrontiereScanner_CURRENT_BUFFER yy_current_buffer
#endif
typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern void YY_FrontiereScanner_RESTART YY_PROTO(( YY_FrontiereScanner_IFILE *input_file ));
extern void YY_FrontiereScanner_SWITCH_TO_BUFFER YY_PROTO(( YY_BUFFER_STATE new_buffer ));
extern void YY_FrontiereScanner_LOAD_BUFFER_STATE YY_PROTO(( void ));
extern YY_BUFFER_STATE YY_FrontiereScanner_CREATE_BUFFER YY_PROTO(( YY_FrontiereScanner_IFILE *file, int size ));
extern void YY_FrontiereScanner_DELETE_BUFFER YY_PROTO(( YY_BUFFER_STATE b ));
extern void YY_FrontiereScanner_INIT_BUFFER YY_PROTO(( YY_BUFFER_STATE b, YY_FrontiereScanner_IFILE *file ));

#if YY_FrontiereScanner_DEBUG != 0
extern int YY_FrontiereScanner_DEBUG_FLAG ;
#endif
extern YY_FrontiereScanner_CHAR  *YY_FrontiereScanner_TEXT;
extern int YY_FrontiereScanner_LENG;
extern YY_FrontiereScanner_IFILE *YY_FrontiereScanner_IN;
extern YY_FrontiereScanner_OFILE *YY_FrontiereScanner_OUT;
#ifdef YY_FrontiereScanner_LEX_DEFINED
extern YY_FrontiereScanner_LEX_RETURN YY_FrontiereScanner_LEX ( YY_FrontiereScanner_LEX_PARAM )
YY_FrontiereScanner_LEX_PARAM_DEF
#else
#ifndef YY_DECL
extern YY_FrontiereScanner_LEX_RETURN YY_FrontiereScanner_LEX ( YY_FrontiereScanner_LEX_PARAM )
YY_FrontiereScanner_LEX_PARAM_DEF
#else
/* no declaration if oldstyle flex */
#endif
#endif
#else

#ifndef YY_FrontiereScanner_CURRENT_BUFFER
#define YY_FrontiereScanner_CURRENT_BUFFER YY_CURRENT_BUFFER
#endif
#ifndef YY_FrontiereScanner_CLASS
#define YY_FrontiereScanner_CLASS FrontiereScanner
#endif
#ifndef YY_FrontiereScanner_ECHO
#define YY_FrontiereScanner_ECHO yy_echo
#endif
#ifdef YY_FrontiereScanner_ECHO_PURE
#define YY_FrontiereScanner_ECHO_NOCODE
#endif

#ifndef YY_FrontiereScanner_ECHO_CODE
#ifndef YY_FrontiereScanner_IOSTREAM
#define YY_FrontiereScanner_ECHO_CODE fwrite( (char *) YY_FrontiereScanner_TEXT, YY_FrontiereScanner_LENG, 1, YY_FrontiereScanner_OUT );
#else
#define YY_FrontiereScanner_ECHO_CODE (YY_FrontiereScanner_OUT->write( (char *) YY_FrontiereScanner_TEXT, YY_FrontiereScanner_LENG));
#endif
#endif

#ifndef YY_FrontiereScanner_INPUT
#define YY_FrontiereScanner_INPUT yy_input
#endif
#ifdef YY_FrontiereScanner_INPUT_PURE
#define YY_FrontiereScanner_INPUT_NOCODE
#endif

#ifndef YY_FrontiereScanner_INPUT_CODE
#ifndef YY_FrontiereScanner_IOSTREAM
#define YY_FrontiereScanner_INPUT_CODE return result= fread(  buffer, 1,max_size,YY_FrontiereScanner_IN );
#else
#define YY_FrontiereScanner_INPUT_CODE if(YY_FrontiereScanner_IN->eof())  result=0;else {YY_FrontiereScanner_IN->read(buffer,max_size);result=YY_FrontiereScanner_IN->gcount();YY_FrontiereScanner_IN->clear(YY_FrontiereScanner_IN->rdstate()&(~ios::failbit));if(YY_FrontiereScanner_IN->bad()) result= -1;} return result;
#endif
#endif

#ifdef YY_FrontiereScanner_FATAL_ERROR_PURE
#define YY_FrontiereScanner_FATAL_ERRO_NOCODE
#endif
#ifndef YY_FrontiereScanner_FATAL_ERROR
#define YY_FrontiereScanner_FATAL_ERROR yy_fatal_error
#endif

#ifndef YY_FrontiereScanner_FATAL_ERROR_CODE
#ifndef YY_FrontiereScanner_IOSTREAM
#define YY_FrontiereScanner_FATAL_ERROR_CODE fputs( msg, YY_FrontiereScanner_ERRFILE );putc( '\n', YY_FrontiereScanner_ERRFILE );exit( 1 );
#else
#define YY_FrontiereScanner_FATAL_ERROR_CODE YY_FrontiereScanner_ERRFILE<< msg <<endl;exit( 1 );
#endif
#endif

#ifndef YY_FrontiereScanner_WRAP
#define YY_FrontiereScanner_WRAP yy_wrap
#endif
#ifdef YY_FrontiereScanner_WRAP_PURE
#define YY_FrontiereScanner_WRAP_NOCODE
#endif
#ifndef YY_FrontiereScanner_WRAP_CODE
#define YY_FrontiereScanner_WRAP_CODE return 1;
#endif


#ifndef YY_FrontiereScanner_INHERIT
#define YY_FrontiereScanner_INHERIT
#endif
#ifndef YY_FrontiereScanner_MEMBERS
#define YY_FrontiereScanner_MEMBERS 
#endif
#ifndef YY_FrontiereScanner_CONSTRUCTOR_PARAM
#define YY_FrontiereScanner_CONSTRUCTOR_PARAM
#endif
#ifndef YY_FrontiereScanner_CONSTRUCTOR_CODE
#define YY_FrontiereScanner_CONSTRUCTOR_CODE
#endif
#ifndef YY_FrontiereScanner_CONSTRUCTOR_INIT
#define YY_FrontiereScanner_CONSTRUCTOR_INIT
#endif
#ifndef YY_FrontiereScanner_DESTRUCTOR_CODE
#define YY_FrontiereScanner_DESTRUCTOR_CODE
#endif
typedef struct yy_buffer_state *YY_BUFFER_STATE;

class YY_FrontiereScanner_CLASS YY_FrontiereScanner_INHERIT
{
 private:/* data */
 YY_FrontiereScanner_CHAR  *yy_c_buf_p;
 YY_FrontiereScanner_CHAR  yy_hold_char;
 int yy_n_chars;
 int yy_init;
 int yy_start;
 int yy_did_buffer_switch_on_eof;
 private: /* functions */
 void yy_initialize();
 int input();
 int yyinput() {return input();};
 int yy_get_next_buffer();
 void yyunput( YY_FrontiereScanner_CHAR  c, YY_FrontiereScanner_CHAR  *buf_ptr );
 /* use long instead of yy_state_type because it is undef */
 long yy_get_previous_state_ ( void );
 long yy_try_NUL_trans_  ( long current_state_ );
 protected:/* non virtual */
 YY_BUFFER_STATE YY_FrontiereScanner_CURRENT_BUFFER;
 void YY_FrontiereScanner_RESTART ( YY_FrontiereScanner_IFILE *input_file );
 void YY_FrontiereScanner_SWITCH_TO_BUFFER( YY_BUFFER_STATE new_buffer );
 void YY_FrontiereScanner_LOAD_BUFFER_STATE( void );
 YY_BUFFER_STATE YY_FrontiereScanner_CREATE_BUFFER( YY_FrontiereScanner_IFILE *file, int size );
 void YY_FrontiereScanner_DELETE_BUFFER( YY_BUFFER_STATE b );
 void YY_FrontiereScanner_INIT_BUFFER( YY_BUFFER_STATE b, YY_FrontiereScanner_IFILE *file );
 protected: /* virtual */
 virtual void YY_FrontiereScanner_ECHO()
#ifdef YY_FrontiereScanner_ECHO_PURE
  =0
#endif
  ;
 virtual int  YY_FrontiereScanner_INPUT(char  *buf,int &result,int max_size)
#ifdef YY_FrontiereScanner_INPUT_PURE
  =0
#endif
  ;
 virtual void  YY_FrontiereScanner_FATAL_ERROR(char *msg)
#ifdef YY_FrontiereScanner_FATAL_ERROR_PURE
  =0
#endif
  ;
 virtual int  YY_FrontiereScanner_WRAP()
#ifdef YY_FrontiereScanner_WRAP_PURE
  =0
#endif
  ;
 public:
 YY_FrontiereScanner_CHAR  *YY_FrontiereScanner_TEXT;
 int YY_FrontiereScanner_LENG;
 YY_FrontiereScanner_IFILE *YY_FrontiereScanner_IN;
 YY_FrontiereScanner_OFILE *YY_FrontiereScanner_OUT;
 YY_FrontiereScanner_LEX_RETURN YY_FrontiereScanner_LEX ( YY_FrontiereScanner_LEX_PARAM);
 YY_FrontiereScanner_CLASS(YY_FrontiereScanner_CONSTRUCTOR_PARAM) ;
 virtual ~YY_FrontiereScanner_CLASS() ;
#if YY_FrontiereScanner_DEBUG != 0
 int YY_FrontiereScanner_DEBUG_FLAG;
#endif
 public: /* added members */
 YY_FrontiereScanner_MEMBERS 
};
#endif



/* declaration of externs for public use of yylex scanner */

/* % here is the declaration from section2 %header{ */ 
#line 59 "FrontiereScanner.l"
#endif
#line 375 "/tmp/flex++/tools/lib/flexskel.h"

/* end of generated header */
