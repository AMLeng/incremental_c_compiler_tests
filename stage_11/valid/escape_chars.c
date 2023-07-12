int printf(); //Can't write param signature since we haven't implemented const
char escape_chars[] = "This is a list of escape characters:\n"
    "'\\a': \"\a\"\n\n"
    "'\\b': \"\b\"\n\n"
    "'\\f': \"\f\"\n\n"
    "'\\r': \"\r\"\n\n"
    "'\\t': \"\t\"\n\n"
    "'\\v': \"\v\"\n\n"
    "'\\\\': \"\\\"\n\n"
    "'\\\'': \"\'\"\n\n"
    "'\\\"': \"\"\"\n\n"
    "'\\\?': \"\?\"\n\n";

int main(){
    return printf(escape_chars); 
}
