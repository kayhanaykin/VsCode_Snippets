{
    "C++ Common Libs": {
        "prefix": "libcpp", // The prefix you'll type to trigger the snippet
        "body": [
            "#include <string>", // Add other common includes here if needed
            "#include <iostream>",
            "",
            "int main(void)",
            "{",
            "    $0",
            "}",
        ],
        "description": "Add two common libraries, iostream and string"
    },

    "C++ Class with .h/.cpp": {
        "prefix": "classcpp", // The prefix you'll type to trigger the snippet
        "body": [
            "#ifndef ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
            "#define ${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H",
            "",
            "#include <string>", // Add other common includes here if needed
            "#include <iostream>",
            "",
            "class ${TM_FILENAME_BASE} {",
            "public:",
            "    ${TM_FILENAME_BASE}();",
			"    ${TM_FILENAME_BASE}( const std::string name );",
			"    ${TM_FILENAME_BASE}( ${TM_FILENAME_BASE} const & copied );",
            "    ~${TM_FILENAME_BASE}();",
            "",
			"    ${TM_FILENAME_BASE} & operator=( ${TM_FILENAME_BASE} const & assignee );",
			"",
            "    void someMethod();",
            "",
            "private:",
            "    std::string _name;",
            "};",
            "",
            "#endif",
            "",
            "#include \"${TM_FILENAME_BASE}.h\"",
            "",
            "${TM_FILENAME_BASE}::${TM_FILENAME_BASE}() {",
            "    std::cout << \"${TM_FILENAME_BASE} default constructor called\\n\";",
            "}",
			"",
            "${TM_FILENAME_BASE}::${TM_FILENAME_BASE}( const std::string name ) : _name(name) {",
            "    std::cout << \"${TM_FILENAME_BASE} parametrized constructor called\\n\";",
            "}",
            "",
			"${TM_FILENAME_BASE}::${TM_FILENAME_BASE}( ${TM_FILENAME_BASE} const & copied ) {",
            "    std::cout << \"${TM_FILENAME_BASE} copy constructor called\\n\";",
			"    *this = copied;",
            "}",
			"",
            "${TM_FILENAME_BASE}::~${TM_FILENAME_BASE}() {",
            "    std::cout << \"${TM_FILENAME_BASE} destructor called\\n\";",
            "}",
            "",
			"${TM_FILENAME_BASE} & ${TM_FILENAME_BASE}::operator=( ${TM_FILENAME_BASE} const & assignee ) {",
            "    if (this != & assignee) {",
			"    this->_name= assignee._name;",
			"    }",
			"    return *this;",
            "}",
			"",
            "void ${TM_FILENAME_BASE}::someMethod() {",
            "    std::cout << \"someMethod called\\n\";",
            "}"
        ],
        "description": "Creates a C++ class with .h and .cpp files"
    },
}

  
