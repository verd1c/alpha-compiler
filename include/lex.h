/*
* lex.h
* 
* Lexicographic Header
*/

/*
* Token general categories
*/
enum category{
    IDENT,
    KEYWORD,
    OPERATOR,
    INTCONST,
    REALCONST,
    PUNCTUATION,
    STRING,
    COMMENT
};

/*
* Token specific categories
*/
enum token_category {
    // Keywords
    IF,
    ELSE,
    WHILE,
    FOR,
    FUNCTION,
    RETURN,
    BREAK,
    CONTINUE,
    AND,
    NOT,
    OR,
    LOCAL,
    TRUE,
    FALSE,
    NIL,

    // Operators
    EQUALS,
    PLUS,
    MINUS,
    MULT,
    DIV,
    MOD,
    EQUALS_EQUALS,
    NOT_EQUALS,
    PLUS_PLUS,
    MINUS_MINUS,
    GREATER_THAN,
    LESS_THAN,
    GREATER_OR_EQUAL,
    LESS_OR_EQUAL,

    // Punctuation
    LEFT_BRACE,
    RIGHT_BRACE,
    LEFT_BRACKET,
    RIGHT_BRACKET,
    LEFT_PARENTHESIS,
    RIGHT_PARENTHESIS,
    SEMICOLON,
    COMMA,
    COLON,
    DOUBLE_COLON,
    DOT,
    DOUBLE_DOT,

    // Comment
    LINE_COMMENT,
    BLOCK_COMMENT,
    NESTED_COMMENT
};

/*
* The structure of an alpha token, usually contained in a linked list
*/
struct alpha_token_t{
    unsigned long token_no;                     // token number

    char text[256];                             // token string representation

    unsigned long line_number;                  // token line number
    unsigned long comment_ending_line_no;       // token ending line, used for block comments

    enum category category;                     // token general category
    enum token_category token_category;         // token specific category

    struct alpha_token_t* next;                 // next in list
};

/*
* Export yyin so it's used from driver function (main)
*/
extern FILE* yyin;

/*
* String representations of general and specific token categories used for output
*/
extern const char* token_category_name[];
extern const char* category_names[];

/*
* The main lexicographic function that builds the linked list
* 
* params:
* 
* lvalp             list head, should be initialized with given space for the list head on first call
*/
int alpha_yylex (struct alpha_token_t* lvalp);

/*
* Processes and adds token with given category, text, etc. into the token list
* 
* params:
* 
* lvalp             list head
* cat               token general category
* text              token string representation
* starting_line     comment starting line, only used with multiline or nested comments
* token_category    specific category, only used with comments
*/
void process_token(struct alpha_token_t* lvalp, enum category cat, char* text, unsigned long starting_line, enum token_category token_category);

/*
* Processes current input into a string until second " is met and replaces all escape characters with their hex equivalent
* If a string is unclosed at end of file, an error is printed
* 
* params:
* 
* lvalp             list head
* 
* returns char*     the processed string
*/
char* process_string(struct alpha_token_t* lvalp);

/*
* Processes a multiline comment, recursively processing more nested comments inside it until the closing comment is met
* 
* params:
* 
* lvalp             list head
* tokencat          the token specific category, used for recursion to tell apart nested comments
*/
void process_multiline(struct alpha_token_t* lvalp, enum token_category tokencat);

/*
* Returns token specific category enumeration given its string representation
* 
* params:
* 
* cat               token general category
* text              token string representation
* 
* returns enum      the token's specific category
*/
enum token_category find_token_type(enum category cat, char* text);