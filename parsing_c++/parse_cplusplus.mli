(* Copyright (C) 2002-2008 Yoann Padioleau
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License (GPL)
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * file license.txt for more details.
 *)
open Common

(* The main function is parse_c_and_cpp. It uses globals in Lexer_Parser and 
 * Parsing_hacks. Especially Parsing_hacks._defs which often comes
 * from a standard.h macro file. Cf also init_defs below.
 *)

(* the token list contains now also the comment-tokens  *)
type info_item = (string * Parser_cplusplus.token list)

type program2 = toplevel2 list
     and toplevel2 = Ast_cplusplus.toplevel * info_item


(* This is the main function *)
val parse_print_error_heuristic:  
  filename (*cfile*) -> (program2 * Parsing_stat2.parsing_stat)
val parse_c_and_cpp : (* alias of previous func *)
  filename (*cfile*) -> (program2 * Parsing_stat2.parsing_stat)

val parse_cpp_define_file : 
  filename -> (string, Parsing_hacks2.define_body) assoc

val init_defs : filename -> unit






val tokens:      filename -> Parser_cplusplus.token list
val tokens_string: string -> Parser_cplusplus.token list

val parse:                        filename -> Ast_cplusplus.program
val parse_print_error:            filename -> Ast_cplusplus.program
val parse_gen: 
    ((Lexing.lexbuf -> Parser_cplusplus.token) -> Lexing.lexbuf -> 'a) -> string -> 'a

(* easy way to build complex Ast elements from simple strings *)
val type_of_string      : string -> Ast_cplusplus.fullType
val statement_of_string : string -> Ast_cplusplus.statement


(* use some .ast_raw memoized version, and take care if obsolete *)
val parse_cache:
  filename (*cfile*) -> (program2 * Parsing_stat2.parsing_stat)


val print_commentized       : Parser_cplusplus.token list -> unit

val threshold_cplusplus : int ref
(* when have a .h, want to know if have to use C or C++ parser *)
val is_problably_cplusplus_file: filename -> bool