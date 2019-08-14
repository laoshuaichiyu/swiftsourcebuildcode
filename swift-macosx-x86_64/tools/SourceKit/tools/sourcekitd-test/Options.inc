/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_1, {"-" COMMA nullptr})
PREFIX(prefix_2, {"-" COMMA "--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "async", async, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Perform request asynchronously", nullptr, nullptr)
OPTION(prefix_1, "cache-path=", cache_path_EQ, Joined, INVALID, cache_path, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "cache-path", cache_path, Separate, INVALID, INVALID, nullptr, 0, 0,
       "cache path", nullptr, nullptr)
OPTION(prefix_1, "cancel-on-subsequent-request=", cancel_on_subsequent_request_EQ, Joined, INVALID, cancel_on_subsequent_request, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "cancel-on-subsequent-request", cancel_on_subsequent_request, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Whether to cancel if there is a subsequent request using the same AST", nullptr, nullptr)
OPTION(prefix_1, "check-interface-ascii", check_interface_is_ascii, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Check that the module interface text is ASCII", nullptr, nullptr)
OPTION(prefix_1, "cursor-action", cursor_action, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print available actions on the code element under cursor", nullptr, nullptr)
OPTION(prefix_1, "dont-print-request", dont_print_request, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Don't print the request", nullptr, nullptr)
OPTION(prefix_1, "dont-print-response", dont_print_response, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not print the response", nullptr, nullptr)
OPTION(prefix_1, "end-pos=", end_pos_EQ, Joined, INVALID, end_pos, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "end-pos", end_pos, Separate, INVALID, INVALID, nullptr, 0, 0,
       "line:col", nullptr, nullptr)
OPTION(prefix_1, "group-name", group_name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Module group name to print", nullptr, nullptr)
OPTION(prefix_1, "header", header, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Header path", nullptr, nullptr)
OPTION(prefix_2, "help", help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display available options", nullptr, nullptr)
OPTION(prefix_1, "h", h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "interested-usr", interested_usr, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Interested USR to calculate the containing group", nullptr, nullptr)
OPTION(prefix_1, "json-request-path", json_request_path, Separate, INVALID, INVALID, nullptr, 0, 0,
       "path to read a request in JSON format", nullptr, nullptr)
OPTION(prefix_1, "length=", length_EQ, Joined, INVALID, length, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "length", length, Separate, INVALID, INVALID, nullptr, 0, 0,
       "length of text referred to by pos / offset", nullptr, nullptr)
OPTION(prefix_1, "line=", line_EQ, Joined, INVALID, line, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "line", line, Separate, INVALID, INVALID, nullptr, 0, 0,
       "line", nullptr, nullptr)
OPTION(prefix_1, "module", module, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Module name", nullptr, nullptr)
OPTION(prefix_1, "name", name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "The preferred name when performing semantic refactoring", nullptr, nullptr)
OPTION(prefix_1, "objc-name", objc_name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Objective-C name to translate from", nullptr, nullptr)
OPTION(prefix_1, "objc-selector", objc_selector, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Objective-C selector name to translate from", nullptr, nullptr)
OPTION(prefix_1, "offset=", offset_EQ, Joined, INVALID, offset, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "offset", offset, Separate, INVALID, INVALID, nullptr, 0, 0,
       "byte offset", nullptr, nullptr)
OPTION(prefix_1, "pass-as-sourcetext", pass_as_sourcetext, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Read source file and pass the contents with key.sourcetext", nullptr, nullptr)
OPTION(prefix_1, "pass-version-as-string", pass_version_as_string, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Pass swift-version as string", nullptr, nullptr)
OPTION(prefix_1, "pos=", pos_EQ, Joined, INVALID, pos, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "pos", pos, Separate, INVALID, INVALID, nullptr, 0, 0,
       "line:col", nullptr, nullptr)
OPTION(prefix_1, "print-raw-response", print_raw_response, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Dump the response to stdout", nullptr, nullptr)
OPTION(prefix_1, "print-response-as-json", print_response_as_json, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the response as JSON output", nullptr, nullptr)
OPTION(prefix_1, "rename-spec=", rename_spec_EQ, Joined, INVALID, rename_spec, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "rename-spec", rename_spec, Separate, INVALID, INVALID, nullptr, 0, 0,
       "The JSON format rename spec file (req=syntactic-rename)", nullptr, nullptr)
OPTION(prefix_1, "repeat-request=", repeat_request_EQ, Joined, INVALID, repeat_request, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "repeat-request", repeat_request, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Repeat the request n times", "<n>", nullptr)
OPTION(prefix_1, "replace=", replace_EQ, Joined, INVALID, replace, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "replace", replace, Separate, INVALID, INVALID, nullptr, 0, 0,
       "replace text ('text')", nullptr, nullptr)
OPTION(prefix_1, "req-opts=", req_opts, CommaJoined, INVALID, INVALID, nullptr, 0, 0,
       "Pass the comma separated options in <arg> as request specific options", "<arg>", nullptr)
OPTION(prefix_1, "req=", req_EQ, Joined, INVALID, req, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "req", req, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Request kind", nullptr, nullptr)
OPTION(prefix_1, "simplified-demangling", simplified_demangling, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use simplified demangling for the 'demangle' request", nullptr, nullptr)
OPTION(prefix_1, "swift-name", swift_name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Swift name to translate from", nullptr, nullptr)
OPTION(prefix_1, "swift-version=", swift_version_EQ, Joined, INVALID, swift_version, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "swift-version", swift_version, Separate, INVALID, INVALID, nullptr, 0, 0,
       "the swift version to use", nullptr, nullptr)
OPTION(prefix_1, "synthesized-extension", synthesized_extension, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print synthesized extensions when generating interface", nullptr, nullptr)
OPTION(prefix_1, "text-input", text_input, Separate, INVALID, INVALID, nullptr, 0, 0,
       "File to get source text from", nullptr, nullptr)
OPTION(prefix_1, "time-request", time_request, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the time taken to process the request", nullptr, nullptr)
OPTION(prefix_1, "using-swift-args", using_swift_args, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Interpret the compiler arguments as Swift compiler arguments", nullptr, nullptr)
OPTION(prefix_1, "usr", usr, Separate, INVALID, INVALID, nullptr, 0, 0,
       "USR", nullptr, nullptr)
OPTION(prefix_1, "vfs-files=", vfs_files, CommaJoined, INVALID, INVALID, nullptr, 0, 0,
       "Injects a VFS into the request, overlaying files specified by the given <name>=<target> pairs over the real filesystem. Prefix destination with '@' to pass as sourcetext.", nullptr, nullptr)
OPTION(prefix_1, "vfs-name", vfs_name, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Specify a virtual filesystem name", nullptr, nullptr)
#endif // OPTION

#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
