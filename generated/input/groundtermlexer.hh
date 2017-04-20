/* Generated by re2c 0.16 on Wed Jan 11 14:40:29 2017 */
#line 1 "libgringo/src/input/groundtermlexer.xh"
// {{{ GPL License 

// This file is part of gringo - a grounder for logic programs.
// Copyright (C) 2013  Roland Kaminski

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// }}}

#define YYCTYPE     char
#define YYCURSOR    cursor()
#define YYLIMIT     limit()
#define YYMARKER    marker()
#define YYCTXMARKER ctxmarker()
#define YYFILL(n)   {fill(n);}

#line 36 "libgringo/src/input/groundtermlexer.xh"


int Gringo::Input::GroundTermParser::lex_impl(void *pValue, Logger &log) {
start:
    start();
    auto &value = *static_cast<Gringo::Input::GroundTermGrammar::parser::semantic_type*>(pValue);
    
#line 39 "build/release/libgringo/src/input/groundtermlexer.hh"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy5;
	case '\n':	goto yy7;
	case '"':	goto yy9;
	case '#':	goto yy10;
	case '&':	goto yy11;
	case '(':	goto yy13;
	case ')':	goto yy15;
	case '*':	goto yy17;
	case '+':	goto yy19;
	case ',':	goto yy21;
	case '-':	goto yy23;
	case '/':	goto yy25;
	case '0':	goto yy27;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	case '?':	goto yy31;
	case '\\':	goto yy33;
	case '^':	goto yy35;
	case '_':	goto yy37;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	case '|':	goto yy41;
	case '~':	goto yy43;
	default:	goto yy3;
	}
yy2:
#line 43 "libgringo/src/input/groundtermlexer.xh"
	{ goto start; }
#line 107 "build/release/libgringo/src/input/groundtermlexer.hh"
yy3:
	++YYCURSOR;
yy4:
#line 66 "libgringo/src/input/groundtermlexer.xh"
	{ lexerError(string(), log); goto start; }
#line 113 "build/release/libgringo/src/input/groundtermlexer.hh"
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy5;
	default:	goto yy2;
	}
yy7:
	++YYCURSOR;
#line 44 "libgringo/src/input/groundtermlexer.xh"
	{ if(eof()) return 0; step(); goto start; }
#line 128 "build/release/libgringo/src/input/groundtermlexer.hh"
yy9:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy4;
	default:	goto yy46;
	}
yy10:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'i':	goto yy51;
	case 's':	goto yy52;
	default:	goto yy4;
	}
yy11:
	++YYCURSOR;
#line 60 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::AND; }
#line 148 "build/release/libgringo/src/input/groundtermlexer.hh"
yy13:
	++YYCURSOR;
#line 52 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::LPAREN; }
#line 153 "build/release/libgringo/src/input/groundtermlexer.hh"
yy15:
	++YYCURSOR;
#line 53 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::RPAREN; }
#line 158 "build/release/libgringo/src/input/groundtermlexer.hh"
yy17:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy53;
	default:	goto yy18;
	}
yy18:
#line 58 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::MUL; }
#line 168 "build/release/libgringo/src/input/groundtermlexer.hh"
yy19:
	++YYCURSOR;
#line 54 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::ADD; }
#line 173 "build/release/libgringo/src/input/groundtermlexer.hh"
yy21:
	++YYCURSOR;
#line 64 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::COMMA; }
#line 178 "build/release/libgringo/src/input/groundtermlexer.hh"
yy23:
	++YYCURSOR;
#line 55 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SUB; }
#line 183 "build/release/libgringo/src/input/groundtermlexer.hh"
yy25:
	++YYCURSOR;
#line 59 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SLASH; }
#line 188 "build/release/libgringo/src/input/groundtermlexer.hh"
yy27:
	++YYCURSOR;
yy28:
#line 49 "libgringo/src/input/groundtermlexer.xh"
	{ value.num = integer(); return GroundTermGrammar::parser::token::NUMBER; }
#line 194 "build/release/libgringo/src/input/groundtermlexer.hh"
yy29:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy29;
	default:	goto yy28;
	}
yy31:
	++YYCURSOR;
#line 63 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::QUESTION; }
#line 216 "build/release/libgringo/src/input/groundtermlexer.hh"
yy33:
	++YYCURSOR;
#line 57 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::MOD; }
#line 221 "build/release/libgringo/src/input/groundtermlexer.hh"
yy35:
	++YYCURSOR;
#line 61 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::XOR; }
#line 226 "build/release/libgringo/src/input/groundtermlexer.hh"
yy37:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '_':	goto yy55;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy4;
	}
yy38:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy40;
	}
yy40:
#line 48 "libgringo/src/input/groundtermlexer.xh"
	{ value.str = String(string()).c_str(); return GroundTermGrammar::parser::token::IDENTIFIER; }
#line 334 "build/release/libgringo/src/input/groundtermlexer.hh"
yy41:
	++YYCURSOR;
#line 65 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::VBAR; }
#line 339 "build/release/libgringo/src/input/groundtermlexer.hh"
yy43:
	++YYCURSOR;
#line 62 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::BNOT; }
#line 344 "build/release/libgringo/src/input/groundtermlexer.hh"
yy45:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy46:
	switch (yych) {
	case '\n':	goto yy47;
	case '"':	goto yy48;
	case '\\':	goto yy50;
	default:	goto yy45;
	}
yy47:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy4;
	case 1: 	goto yy60;
	default:	goto yy62;
	}
yy48:
	++YYCURSOR;
#line 50 "libgringo/src/input/groundtermlexer.xh"
	{ value.str = String(unquote(string(1, 1)).c_str()).c_str(); return GroundTermGrammar::parser::token::STRING; }
#line 367 "build/release/libgringo/src/input/groundtermlexer.hh"
yy50:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\\':
	case 'n':	goto yy45;
	default:	goto yy47;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy57;
	default:	goto yy47;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy58;
	default:	goto yy47;
	}
yy53:
	++YYCURSOR;
#line 56 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::POW; }
#line 394 "build/release/libgringo/src/input/groundtermlexer.hh"
yy55:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '_':	goto yy55;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy38;
	default:	goto yy47;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'f':	goto yy59;
	default:	goto yy47;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'p':	goto yy61;
	default:	goto yy47;
	}
yy59:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'i':	goto yy63;
	default:	goto yy60;
	}
yy60:
#line 45 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::INFIMUM; }
#line 451 "build/release/libgringo/src/input/groundtermlexer.hh"
yy61:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'r':	goto yy64;
	default:	goto yy62;
	}
yy62:
#line 46 "libgringo/src/input/groundtermlexer.xh"
	{ return GroundTermGrammar::parser::token::SUPREMUM; }
#line 462 "build/release/libgringo/src/input/groundtermlexer.hh"
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy65;
	default:	goto yy47;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy66;
	default:	goto yy47;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy67;
	default:	goto yy47;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy68;
	default:	goto yy47;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy69;
	default:	goto yy47;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy70;
	default:	goto yy47;
	}
yy69:
	yych = *++YYCURSOR;
	goto yy60;
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy71;
	default:	goto yy47;
	}
yy71:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy62;
}
#line 67 "libgringo/src/input/groundtermlexer.xh"

    assert(false);
    return 0;
}

#undef YYCTYPE
#undef YYCURSOR
#undef YYLIMIT
#undef YYMARKER
#undef YYFILL
