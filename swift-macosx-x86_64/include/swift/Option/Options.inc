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
PREFIX(prefix_3, {"-" COMMA "--" COMMA nullptr})
PREFIX(prefix_2, {"--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "<optimization level options>", O_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<code formatting options>", code_formatting_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<automatic crashing options>", debug_crash_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<debug info options>", g_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<swift internal options>", internal_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<swift debug/development internal options>", internal_debug_Group, Group, internal_Group, INVALID, nullptr, 0, 0,
       "DEBUG/DEVELOPMENT OPTIONS", nullptr, nullptr)
OPTION(nullptr, "<linker-specific options>", linker_option_Group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(nullptr, "<mode options>", modes_Group, Group, INVALID, INVALID, nullptr, 0, 0,
       "MODES", nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "###", _HASH_HASH_HASH, Flag, INVALID, driver_print_jobs, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "api-diff-data-dir", api_diff_data_dir, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Load platform and version specific API migration data files from <path>. Ignored if -api-diff-data-file is specified.", "<path>", nullptr)
OPTION(prefix_1, "api-diff-data-file", api_diff_data_file, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "API migration data is from <path>", "<path>", nullptr)
OPTION(prefix_1, "application-extension", enable_app_extension, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Restrict code to those available for App Extensions", nullptr, nullptr)
OPTION(prefix_1, "assert-config", AssertConfig, Separate, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Specify the assert_configuration replacement. Possible values are Debug, Release, Unchecked, DisableReplacement.", nullptr, nullptr)
OPTION(prefix_1, "assume-single-threaded", AssumeSingleThreaded, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Assume that code will be executed in a single-threaded environment", nullptr, nullptr)
OPTION(prefix_1, "autolink-force-load", autolink_force_load, Flag, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption | HelpHidden, 0,
       "Force ld to link against this module even if no symbols are used", nullptr, nullptr)
OPTION(prefix_1, "autolink-library", autolink_library, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Add dependent library", nullptr, nullptr)
OPTION(prefix_1, "build-module-from-parseable-interface", build_module_from_parseable_interface, Flag, modes_Group, compile_module_from_interface, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "bypass-batch-mode-checks", bypass_batch_mode_checks, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Bypass checks for batch-mode errors.", nullptr, nullptr)
OPTION(prefix_1, "check-onone-completeness", check_onone_completeness, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Print errors if the compile OnoneSupport module is missing symbols", nullptr, nullptr)
OPTION(prefix_1, "code-complete-call-pattern-heuristics", code_complete_call_pattern_heuristics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Use heuristics to guess whether we want call pattern completions", nullptr, nullptr)
OPTION(prefix_1, "code-complete-inits-in-postfix-expr", code_complete_inits_in_postfix_expr, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Include initializers when completing a postfix expression", nullptr, nullptr)
OPTION(prefix_1, "color-diagnostics", color_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Print diagnostics in color", nullptr, nullptr)
OPTION(prefix_1, "compare-to-astscope-lookup", compare_to_astscope_lookup, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Compare legacy to ASTScope-based unqualified name lookup (for debugging)", nullptr, nullptr)
OPTION(prefix_1, "compile-module-from-interface", compile_module_from_interface, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Treat the (single) input as a swiftinterface and produce a module", nullptr, nullptr)
OPTION(prefix_1, "continue-building-after-errors", continue_building_after_errors, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Continue building, even after errors are encountered", nullptr, nullptr)
OPTION(prefix_1, "c", c, Flag, modes_Group, emit_object, nullptr, FrontendOption | NoInteractiveOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "debug-assert-after-parse", debug_assert_after_parse, Flag, debug_crash_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Force an assertion failure after parsing", nullptr, nullptr)
OPTION(prefix_1, "debug-assert-immediately", debug_assert_immediately, Flag, debug_crash_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Force an assertion failure immediately", nullptr, nullptr)
OPTION(prefix_1, "debug-constraints-attempt", debug_constraints_attempt, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Debug the constraint solver at a given attempt", nullptr, nullptr)
OPTION(prefix_1, "debug-constraints-on-line=", debug_constraints_on_line_EQ, Joined, INVALID, debug_constraints_on_line, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "debug-constraints-on-line", debug_constraints_on_line, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Debug the constraint solver for expressions on <line>", "<line>", nullptr)
OPTION(prefix_1, "debug-constraints", debug_constraints, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Debug the constraint-based type checker", nullptr, nullptr)
OPTION(prefix_1, "debug-crash-after-parse", debug_crash_after_parse, Flag, debug_crash_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Force a crash after parsing", nullptr, nullptr)
OPTION(prefix_1, "debug-crash-immediately", debug_crash_immediately, Flag, debug_crash_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Force a crash immediately", nullptr, nullptr)
OPTION(prefix_1, "debug-cycles", debug_cycles, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Print out debug dumps when cycles are detected in evaluation", nullptr, nullptr)
OPTION(prefix_1, "debug-diagnostic-names", debug_diagnostic_names, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild | HelpHidden, 0,
       "Include diagnostic names when printing", nullptr, nullptr)
OPTION(prefix_1, "debug-forbid-typecheck-prefix", debug_forbid_typecheck_prefix, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Triggers llvm fatal_error if typechecker tries to typecheck a decl with the provided prefix name", nullptr, nullptr)
OPTION(prefix_1, "debug-generic-signatures", debug_generic_signatures, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Debug generic signatures", nullptr, nullptr)
OPTION(prefix_1, "debug-info-format=", debug_info_format, Joined, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Specify the debug info format type to either 'dwarf' or 'codeview'", nullptr, nullptr)
OPTION(prefix_1, "debug-info-store-invocation", debug_info_store_invocation, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Emit the compiler invocation in the debug info.", nullptr, nullptr)
OPTION(prefix_1, "debug-prefix-map", debug_prefix_map, Separate, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Remap source paths in debug info", nullptr, nullptr)
OPTION(prefix_1, "debug-time-compilation", debug_time_compilation, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Prints the time taken by each compilation phase", nullptr, nullptr)
OPTION(prefix_1, "debug-time-expression-type-checking", debug_time_expression_type_checking, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Dumps the time it takes to type-check each expression", nullptr, nullptr)
OPTION(prefix_1, "debug-time-function-bodies", debug_time_function_bodies, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Dumps the time it takes to type-check each function body", nullptr, nullptr)
OPTION(prefix_1, "debugger-support", debugger_support, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Process swift code as if running in the debugger", nullptr, nullptr)
OPTION(prefix_1, "debugger-testing-transform", debugger_testing_transform, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Instrument the code with calls to an intrinsic that record the expected values of local variables so they can be compared against the results from the debugger.", nullptr, nullptr)
OPTION(prefix_1, "deprecated-integrated-repl", deprecated_integrated_repl, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoBatchOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "diagnostics-editor-mode", diagnostics_editor_mode, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Diagnostics will be used in editor", nullptr, nullptr)
OPTION(prefix_1, "disable-access-control", disable_access_control, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't respect access control restrictions", nullptr, nullptr)
OPTION(prefix_1, "disable-arc-opts", disable_arc_opts, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run SIL ARC optimization passes.", nullptr, nullptr)
OPTION(prefix_1, "disable-astscope-lookup", disable_astscope_lookup, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Disable ASTScope-based unqualified name lookup", nullptr, nullptr)
OPTION(prefix_1, "disable-autolink-framework", disable_autolink_framework, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable autolinking against the provided framework", nullptr, nullptr)
OPTION(prefix_1, "disable-autolinking-runtime-compatibility-dynamic-replacements", disable_autolinking_runtime_compatibility_dynamic_replacements, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Do not use autolinking for the dynamic replacement runtime compatibility library", nullptr, nullptr)
OPTION(prefix_1, "disable-autolinking-runtime-compatibility", disable_autolinking_runtime_compatibility, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Do not use autolinking for runtime compatibility libraries", nullptr, nullptr)
OPTION(prefix_1, "disable-availability-checking", disable_availability_checking, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable checking for potentially unavailable APIs", nullptr, nullptr)
OPTION(prefix_1, "disable-batch-mode", disable_batch_mode, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0,
       "Disable combining frontend jobs into batches", nullptr, nullptr)
OPTION(prefix_1, "disable-bridging-pch", disable_bridging_pch, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Disable automatic generation of bridging PCH files", nullptr, nullptr)
OPTION(prefix_1, "disable-constraint-solver-performance-hacks", disable_constraint_solver_performance_hacks, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable all the hacks in the constraint solver", nullptr, nullptr)
OPTION(prefix_1, "disable-deserialization-recovery", disable_deserialization_recovery, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't attempt to recover from missing xrefs (etc) in swiftmodules", nullptr, nullptr)
OPTION(prefix_1, "disable-diagnostic-passes", disable_diagnostic_passes, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run diagnostic passes", nullptr, nullptr)
OPTION(prefix_1, "disable-incremental-llvm-codegen", disable_incremental_llvm_codegeneration, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable incremental llvm code generation.", nullptr, nullptr)
OPTION(prefix_1, "disable-legacy-type-info", disable_legacy_type_info, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Completely disable legacy type layout", nullptr, nullptr)
OPTION(prefix_1, "disable-llvm-optzns", disable_llvm_optzns, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run LLVM optimization passes", nullptr, nullptr)
OPTION(prefix_1, "disable-llvm-slp-vectorizer", disable_llvm_slp_vectorizer, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run LLVM SLP vectorizer", nullptr, nullptr)
OPTION(prefix_1, "disable-llvm-value-names", disable_llvm_value_names, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't add names to local values in LLVM IR", nullptr, nullptr)
OPTION(prefix_1, "disable-llvm-verify", disable_llvm_verify, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run the LLVM IR verifier.", nullptr, nullptr)
OPTION(prefix_1, "disable-migrator-fixits", disable_migrator_fixits, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Disable the Migrator phase which automatically applies fix-its", nullptr, nullptr)
OPTION(prefix_1, "disable-modules-validate-system-headers", disable_modules_validate_system_headers, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable validating system headers in the Clang importer", nullptr, nullptr)
OPTION(prefix_1, "disable-named-lazy-member-loading", disable_named_lazy_member_loading, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable per-name lazy member loading", nullptr, nullptr)
OPTION(prefix_1, "disable-nonfrozen-enum-exhaustivity-diagnostics", disable_nonfrozen_enum_exhaustivity_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Allow switches over non-frozen enums without catch-all cases", nullptr, nullptr)
OPTION(prefix_1, "disable-nskeyedarchiver-diagnostics", disable_nskeyedarchiver_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Allow classes with unstable mangled names to adopt NSCoding", nullptr, nullptr)
OPTION(prefix_1, "disable-objc-attr-requires-foundation-module", disable_objc_attr_requires_foundation_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden | ModuleInterfaceOption, 0,
       "Disable requiring uses of @objc to require importing the Foundation module", nullptr, nullptr)
OPTION(prefix_1, "disable-objc-interop", disable_objc_interop, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden | ModuleInterfaceOption, 0,
       "Disable Objective-C interop code generation and config directives", nullptr, nullptr)
OPTION(prefix_1, "disable-parser-lookup", disable_parser_lookup, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Disable parser lookup & use ast scope lookup only (experimental)", nullptr, nullptr)
OPTION(prefix_1, "disable-playground-transform", disable_playground_transform, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable playground transformation", nullptr, nullptr)
OPTION(prefix_1, "disable-previous-implementation-calls-in-dynamic-replacements", disable_previous_implementation_calls_in_dynamic_replacements, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable calling the previous implementation in dynamic replacements", nullptr, nullptr)
OPTION(prefix_1, "disable-reflection-metadata", disable_reflection_metadata, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable emission of reflection metadata for nominal types", nullptr, nullptr)
OPTION(prefix_1, "disable-reflection-names", disable_reflection_names, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable emission of names of stored properties and enum cases inreflection metadata", nullptr, nullptr)
OPTION(prefix_1, "disable-serialization-nested-type-lookup-table", disable_serialization_nested_type_lookup_table, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Force module merging to use regular lookups to find nested types", nullptr, nullptr)
OPTION(prefix_1, "disable-sil-ownership-verifier", disable_sil_ownership_verifier, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Do not verify ownership invariants during SIL Verification ", nullptr, nullptr)
OPTION(prefix_1, "disable-sil-partial-apply", disable_sil_partial_apply, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable use of partial_apply in SIL generation", nullptr, nullptr)
OPTION(prefix_1, "disable-sil-perf-optzns", disable_sil_perf_optzns, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run SIL performance optimization passes", nullptr, nullptr)
OPTION(prefix_1, "disable-swift-bridge-attr", disable_swift_bridge_attr, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Disable using the swift bridge attribute", nullptr, nullptr)
OPTION(prefix_1, "disable-swift-specific-llvm-optzns", disable_swift_specific_llvm_optzns, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't run Swift specific LLVM optimization passes.", nullptr, nullptr)
OPTION(prefix_1, "disable-swift3-objc-inference", disable_swift3_objc_inference, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable Swift 3's @objc inference rules for NSObject-derived classes and 'dynamic' members (emulates Swift 4 behavior)", nullptr, nullptr)
OPTION(prefix_1, "disable-target-os-checking", disable_target_os_checking, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Disable checking the target OS of serialized modules", nullptr, nullptr)
OPTION(prefix_1, "disable-testable-attr-requires-testable-module", disable_testable_attr_requires_testable_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Disable checking of @testable", nullptr, nullptr)
OPTION(prefix_1, "disable-tsan-inout-instrumentation", disable_tsan_inout_instrumentation, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable treatment of inout parameters as Thread Sanitizer accesses", nullptr, nullptr)
OPTION(prefix_1, "disable-typo-correction", disable_typo_correction, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Disable typo correction", nullptr, nullptr)
OPTION(prefix_1, "disable-verify-exclusivity", disable_verify_exclusivity, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Diable verification of access markers used to enforce exclusivity.", nullptr, nullptr)
OPTION(prefix_1, "driver-always-rebuild-dependents", driver_always_rebuild_dependents, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Always rebuild dependents of files that have been modified", nullptr, nullptr)
OPTION(prefix_1, "driver-batch-count", driver_batch_count, Separate, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Use the given number of batch-mode partitions, rather than partitioning dynamically", nullptr, nullptr)
OPTION(prefix_1, "driver-batch-seed", driver_batch_seed, Separate, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Use the given seed value to randomize batch-mode partitions", nullptr, nullptr)
OPTION(prefix_1, "driver-batch-size-limit", driver_batch_size_limit, Separate, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Use the given number as the upper limit on dynamic batch-mode partition size", nullptr, nullptr)
OPTION(prefix_1, "driver-emit-experimental-dependency-dot-file-after-every-import", driver_emit_experimental_dependency_dot_file_after_every_import, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Emit dot files every time driver imports an experimental swiftdeps file.", nullptr, nullptr)
OPTION(prefix_1, "driver-filelist-threshold=", driver_filelist_threshold_EQ, Joined, INVALID, driver_filelist_threshold, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "driver-filelist-threshold", driver_filelist_threshold, Separate, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Pass input or output file names as filelists if there are more than <n>", "<n>", nullptr)
OPTION(prefix_1, "driver-force-response-files", driver_force_response_files, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Force the use of response files for testing", nullptr, nullptr)
OPTION(prefix_2, "driver-mode=", driver_mode, Joined, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Set the driver mode to either 'swift' or 'swiftc'", nullptr, nullptr)
OPTION(prefix_1, "driver-print-actions", driver_print_actions, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Dump list of actions to perform", nullptr, nullptr)
OPTION(prefix_1, "driver-print-bindings", driver_print_bindings, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Dump list of job inputs and outputs", nullptr, nullptr)
OPTION(prefix_1, "driver-print-derived-output-file-map", driver_print_derived_output_file_map, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Dump the contents of the derived output file map", nullptr, nullptr)
OPTION(prefix_1, "driver-print-jobs", driver_print_jobs, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Dump list of jobs to execute", nullptr, nullptr)
OPTION(prefix_1, "driver-print-output-file-map", driver_print_output_file_map, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Dump the contents of the output file map", nullptr, nullptr)
OPTION(prefix_1, "driver-show-incremental", driver_show_incremental, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "With -v, dump information about why files are being rebuilt", nullptr, nullptr)
OPTION(prefix_1, "driver-show-job-lifecycle", driver_show_job_lifecycle, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Show every step in the lifecycle of driver jobs", nullptr, nullptr)
OPTION(prefix_1, "driver-skip-execution", driver_skip_execution, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Skip execution of subtasks when performing compilation", nullptr, nullptr)
OPTION(prefix_1, "driver-time-compilation", driver_time_compilation, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Prints the total time it took to execute all compilation tasks", nullptr, nullptr)
OPTION(prefix_1, "driver-use-filelists", driver_use_filelists, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Pass input files as filelists whenever possible", nullptr, nullptr)
OPTION(prefix_1, "driver-use-frontend-path", driver_use_frontend_path, Separate, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Use the given executable to perform compilations. Arguments can be passed as a ';' separated list", nullptr, nullptr)
OPTION(prefix_1, "driver-verify-experimental-dependency-graph-after-every-import", driver_verify_experimental_dependency_graph_after_every_import, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Debug DriverGraph by verifying it after every import", nullptr, nullptr)
OPTION(prefix_1, "dump-api-path", dump_api_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "The path to output swift interface files for the compiled source files", nullptr, nullptr)
OPTION(prefix_1, "dump-ast", dump_ast, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse and type-check input file(s) and dump AST(s)", nullptr, nullptr)
OPTION(prefix_1, "dump-clang-diagnostics", dump_clang_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Dump Clang diagnostics to stderr", nullptr, nullptr)
OPTION(prefix_1, "dump-interface-hash", dump_interface_hash, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Parse input file(s) and dump interface token hash(es)", nullptr, nullptr)
OPTION(prefix_1, "dump-migration-states-dir", dump_migration_states_dir, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Dump the input text, output text, and states for migration to <path>", "<path>", nullptr)
OPTION(prefix_1, "dump-parse", dump_parse, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse input file(s) and dump AST(s)", nullptr, nullptr)
OPTION(prefix_1, "dump-scope-maps", dump_scope_maps, Separate, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse and type-check input file(s) and dump the scope map(s)", "<expanded-or-list-of-line:column>", nullptr)
OPTION(prefix_1, "dump-type-info", dump_type_info, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Output YAML dump of fixed-size types from all imported modules", nullptr, nullptr)
OPTION(prefix_1, "dump-type-refinement-contexts", dump_type_refinement_contexts, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Type-check input file(s) and dump type refinement contexts(s)", nullptr, nullptr)
OPTION(prefix_1, "dump-usr", dump_usr, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Dump USR for each declaration reference", nullptr, nullptr)
OPTION(prefix_1, "D", D, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Marks a conditional compilation flag as true", nullptr, nullptr)
OPTION(prefix_1, "embed-bitcode-marker", embed_bitcode_marker, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Embed placeholder LLVM IR data as a marker", nullptr, nullptr)
OPTION(prefix_1, "embed-bitcode", embed_bitcode, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Embed LLVM IR bitcode as data", nullptr, nullptr)
OPTION(prefix_1, "emit-assembly", emit_assembly, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit assembly file(s) (-S)", nullptr, nullptr)
OPTION(prefix_1, "emit-bc", emit_bc, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit LLVM BC file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-dependencies-path", emit_dependencies_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Output basic Make-compatible dependencies file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-dependencies", emit_dependencies, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit basic Make-compatible dependencies files", nullptr, nullptr)
OPTION(prefix_1, "emit-executable", emit_executable, Flag, modes_Group, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit a linked executable", nullptr, nullptr)
OPTION(prefix_1, "emit-fixits-path", emit_fixits_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Output compiler fixits as source edits to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-imported-modules", emit_imported_modules, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit a list of the imported modules", nullptr, nullptr)
OPTION(prefix_1, "emit-ir", emit_ir, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit LLVM IR file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-library", emit_library, Flag, modes_Group, INVALID, nullptr, NoInteractiveOption, 0,
       "Emit a linked library", nullptr, nullptr)
OPTION(prefix_1, "emit-loaded-module-trace-path=", emit_loaded_module_trace_path_EQ, Joined, INVALID, emit_loaded_module_trace_path, nullptr, FrontendOption | NoInteractiveOption | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "emit-loaded-module-trace-path", emit_loaded_module_trace_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | ArgumentIsPath, 0,
       "Emit the loaded module trace JSON to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-loaded-module-trace", emit_loaded_module_trace, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Emit a JSON file containing information about what modules were loaded", nullptr, nullptr)
OPTION(prefix_1, "emit-migrated-file-path", emit_migrated_file_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit the migrated source file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-module-doc-path", emit_module_doc_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Output module documentation file <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-module-doc", emit_module_doc, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Emit a module documentation file based on documentation comments", nullptr, nullptr)
OPTION(prefix_1, "emit-module-interface-path", emit_module_interface_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Output module interface file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-module-interface", emit_module_interface, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Output module interface file", nullptr, nullptr)
OPTION(prefix_1, "emit-module-path=", emit_module_path_EQ, Joined, INVALID, emit_module_path, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "emit-module-path", emit_module_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Emit an importable module to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-module", emit_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit an importable module", nullptr, nullptr)
OPTION(prefix_1, "emit-objc-header-path", emit_objc_header_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Emit an Objective-C header file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-objc-header", emit_objc_header, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit an Objective-C header file", nullptr, nullptr)
OPTION(prefix_1, "emit-object", emit_object, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit object file(s) (-c)", nullptr, nullptr)
OPTION(prefix_1, "emit-parseable-module-interface-path", emit_parseable_module_interface_path, Separate, INVALID, emit_module_interface_path, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | HelpHidden | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "emit-parseable-module-interface", emit_parseable_module_interface, Flag, INVALID, emit_module_interface, nullptr, NoInteractiveOption | HelpHidden | DoesNotAffectIncrementalBuild, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "emit-pch", emit_pch, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emit PCH for imported Objective-C header file", nullptr, nullptr)
OPTION(prefix_1, "emit-reference-dependencies-path", emit_reference_dependencies_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Output Swift-style dependencies file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-reference-dependencies", emit_reference_dependencies, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Emit a Swift-style dependencies file", nullptr, nullptr)
OPTION(prefix_1, "emit-remap-file-path", emit_remap_file_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit the replacement map describing Swift Migrator changes to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-sibgen", emit_sibgen, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit serialized AST + raw SIL file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-sib", emit_sib, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit serialized AST + canonical SIL file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-silgen", emit_silgen, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit raw SIL file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-sil", emit_sil, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit canonical SIL file(s)", nullptr, nullptr)
OPTION(prefix_1, "emit-sorted-sil", emit_sorted_sil, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "When printing SIL, print out all sil entities sorted by name to ease diffing", nullptr, nullptr)
OPTION(prefix_1, "emit-stack-promotion-checks", stack_promotion_checks, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emit runtime checks for correct stack promotion of objects.", nullptr, nullptr)
OPTION(prefix_1, "emit-syntax", emit_syntax, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Parse input file(s) and emit the Syntax tree(s) as JSON", nullptr, nullptr)
OPTION(prefix_1, "emit-tbd-path=", emit_tbd_path_EQ, Joined, INVALID, emit_tbd_path, nullptr, FrontendOption | NoInteractiveOption | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "emit-tbd-path", emit_tbd_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | ArgumentIsPath, 0,
       "Emit the TBD file to <path>", "<path>", nullptr)
OPTION(prefix_1, "emit-tbd", emit_tbd, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Emit a TBD file", nullptr, nullptr)
OPTION(prefix_1, "emit-verbose-sil", emit_verbose_sil, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emit locations during SIL emission", nullptr, nullptr)
OPTION(prefix_1, "enable-access-control", enable_access_control, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Respect access control restrictions", nullptr, nullptr)
OPTION(prefix_1, "enable-anonymous-context-mangled-names", enable_anonymous_context_mangled_names, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable emission of mangled names in anonymous context descriptors", nullptr, nullptr)
OPTION(prefix_1, "enable-astscope-lookup", enable_astscope_lookup, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Enable ASTScope-based unqualified name lookup", nullptr, nullptr)
OPTION(prefix_1, "enable-batch-mode", enable_batch_mode, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0,
       "Enable combining frontend jobs into batches", nullptr, nullptr)
OPTION(prefix_1, "enable-bridging-pch", enable_bridging_pch, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Enable automatic generation of bridging PCH files", nullptr, nullptr)
OPTION(prefix_1, "enable-cxx-interop", enable_cxx_interop, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable C++ interop code generation and config directives", nullptr, nullptr)
OPTION(prefix_1, "enable-deserialization-recovery", enable_deserialization_recovery, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Attempt to recover from missing xrefs (etc) in swiftmodules", nullptr, nullptr)
OPTION(prefix_1, "enable-dynamic-replacement-chaining", enable_dynamic_replacement_chaining, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable chaining of dynamic replacements", nullptr, nullptr)
OPTION(prefix_1, "enable-experimental-dependencies", enable_experimental_dependencies, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Experimental work-in-progress to be more selective about incremental recompilation", nullptr, nullptr)
OPTION(prefix_1, "enable-experimental-static-assert", enable_experimental_static_assert, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable experimental #assert", nullptr, nullptr)
OPTION(prefix_1, "enable-implicit-dynamic", enable_implicit_dynamic, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Add 'dynamic' to all declarations", nullptr, nullptr)
OPTION(prefix_1, "enable-infer-import-as-member", enable_infer_import_as_member, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Infer when a global could be imported as a member", nullptr, nullptr)
OPTION(prefix_1, "enable-large-loadable-types", enable_large_loadable_types, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable Large Loadable types IRGen pass", nullptr, nullptr)
OPTION(prefix_1, "enable-library-evolution", enable_library_evolution, Flag, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Build the module to allow binary-compatible library evolution", nullptr, nullptr)
OPTION(prefix_1, "enable-llvm-value-names", enable_llvm_value_names, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Add names to local values in LLVM IR", nullptr, nullptr)
OPTION(prefix_1, "enable-nonfrozen-enum-exhaustivity-diagnostics", enable_nonfrozen_enum_exhaustivity_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Diagnose switches over non-frozen enums without catch-all cases", nullptr, nullptr)
OPTION(prefix_1, "enable-nskeyedarchiver-diagnostics", enable_nskeyedarchiver_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Diagnose classes with unstable mangled names adopting NSCoding", nullptr, nullptr)
OPTION(prefix_1, "enable-objc-attr-requires-foundation-module", enable_objc_attr_requires_foundation_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden | ModuleInterfaceOption, 0,
       "Enable requiring uses of @objc to require importing the Foundation module", nullptr, nullptr)
OPTION(prefix_1, "enable-objc-interop", enable_objc_interop, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden | ModuleInterfaceOption, 0,
       "Enable Objective-C interop code generation and config directives", nullptr, nullptr)
OPTION(prefix_1, "enable-operator-designated-types", enable_operator_designated_types, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable operator designated types", nullptr, nullptr)
OPTION(prefix_1, "enable-ownership-stripping-after-serialization", enable_ownership_stripping_after_serialization, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Strip ownership after serialization", nullptr, nullptr)
OPTION(prefix_1, "enable-private-imports", enable_private_imports, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0,
       "Allows this module's internal and private API to be accessed", nullptr, nullptr)
OPTION(prefix_1, "enable-resilience", enable_resilience, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden | ModuleInterfaceOption, 0,
       "Deprecated, use -enable-library-evolution instead", nullptr, nullptr)
OPTION(prefix_1, "enable-sil-opaque-values", enable_sil_opaque_values, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable SIL Opaque Values", nullptr, nullptr)
OPTION(prefix_1, "enable-source-import", enable_source_import, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable importing of Swift source files", nullptr, nullptr)
OPTION(prefix_1, "enable-swift3-objc-inference", enable_swift3_objc_inference, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable Swift 3's @objc inference rules for NSObject-derived classes and 'dynamic' members (emulates Swift 3 behavior)", nullptr, nullptr)
OPTION(prefix_1, "enable-swiftcall", enable_swiftcall, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Enable the use of LLVM swiftcall support", nullptr, nullptr)
OPTION(prefix_1, "enable-target-os-checking", enable_target_os_checking, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Enable checking the target OS of serialized modules", nullptr, nullptr)
OPTION(prefix_1, "enable-testable-attr-requires-testable-module", enable_testable_attr_requires_testable_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Enable checking of @testable", nullptr, nullptr)
OPTION(prefix_1, "enable-testing", enable_testing, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0,
       "Allows this module's internal API to be accessed for testing", nullptr, nullptr)
OPTION(prefix_1, "enable-throw-without-try", enable_throw_without_try, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Allow throwing function calls without 'try'", nullptr, nullptr)
OPTION(prefix_1, "enable-verify-exclusivity", enable_verify_exclusivity, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable verification of access markers used to enforce exclusivity.", nullptr, nullptr)
OPTION(prefix_1, "enforce-exclusivity=", enforce_exclusivity_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Enforce law of exclusivity", "<enforcement>", nullptr)
OPTION(prefix_1, "experimental-dependency-include-intrafile", experimental_dependency_include_intrafile, Flag, internal_debug_Group, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Include within-file dependencies.", nullptr, nullptr)
OPTION(prefix_1, "external-pass-pipeline-filename", external_pass_pipeline_filename, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Use the pass pipeline defined by <pass_pipeline_file>", "<pass_pipeline_file>", nullptr)
OPTION(prefix_1, "F=", F_EQ, Joined, INVALID, F, nullptr, FrontendOption | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "filelist", filelist, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Specify source inputs in a file rather than on the command line", nullptr, nullptr)
OPTION(prefix_1, "fixit-all", fixit_all, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Apply all fixits from diagnostics without any filtering", nullptr, nullptr)
OPTION(prefix_1, "force-public-linkage", force_public_linkage, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Force public linkage for private symbols. Used by LLDB.", nullptr, nullptr)
OPTION(prefix_1, "force-single-frontend-invocation", force_single_frontend_invocation, Flag, INVALID, whole_module_optimization, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "framework", framework, Separate, linker_option_Group, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Specifies a framework which should be linked against", nullptr, nullptr)
OPTION(prefix_1, "Fsystem", Fsystem, Separate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Add directory to system framework search path", nullptr, nullptr)
OPTION(prefix_1, "F", F, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Add directory to framework search path", nullptr, nullptr)
OPTION(prefix_1, "gdwarf-types", gdwarf_types, Flag, g_Group, INVALID, nullptr, FrontendOption, 0,
       "Emit full DWARF type info.", nullptr, nullptr)
OPTION(prefix_1, "gline-tables-only", gline_tables_only, Flag, g_Group, INVALID, nullptr, FrontendOption, 0,
       "Emit minimal debug info for backtraces only", nullptr, nullptr)
OPTION(prefix_1, "gnone", gnone, Flag, g_Group, INVALID, nullptr, FrontendOption, 0,
       "Don't emit debug info", nullptr, nullptr)
OPTION(prefix_1, "group-info-path", group_info_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "The path to collect the group information of the compiled module", nullptr, nullptr)
OPTION(prefix_1, "gsil", debug_on_sil, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Write the SIL into a file and generate debug-info to debug on SIL  level.", nullptr, nullptr)
OPTION(prefix_1, "g", g, Flag, g_Group, INVALID, nullptr, FrontendOption, 0,
       "Emit debug info. This is the preferred setting for debugging with LLDB.", nullptr, nullptr)
OPTION(prefix_3, "help-hidden", help_hidden, Flag, INVALID, INVALID, nullptr, HelpHidden | FrontendOption, 0,
       "Display available options, including hidden options", nullptr, nullptr)
OPTION(prefix_3, "help", help, Flag, INVALID, INVALID, nullptr, FrontendOption | AutolinkExtractOption | ModuleWrapOption | SwiftIndentOption, 0,
       "Display available options", nullptr, nullptr)
OPTION(prefix_1, "h", h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "I=", I_EQ, Joined, INVALID, I, nullptr, FrontendOption | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "import-cf-types", import_cf_types, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Recognize and import CF types as class types", nullptr, nullptr)
OPTION(prefix_1, "import-module", import_module, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Implicitly import the specified module", nullptr, nullptr)
OPTION(prefix_1, "import-objc-header", import_objc_header, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ArgumentIsPath, 0,
       "Implicitly imports an Objective-C header file", nullptr, nullptr)
OPTION(prefix_1, "import-underlying-module", import_underlying_module, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Implicitly imports the Objective-C half of a module", nullptr, nullptr)
OPTION(prefix_1, "in-place", in_place, Flag, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "Overwrite input file with formatted file.", nullptr, nullptr)
OPTION(prefix_1, "incremental", incremental, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Perform an incremental build if possible", nullptr, nullptr)
OPTION(prefix_1, "indent-switch-case", indent_switch_case, Flag, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "Indent cases in switch statements.", nullptr, nullptr)
OPTION(prefix_1, "indent-width", indent_width, Separate, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "Number of characters to indent.", "<n>", nullptr)
OPTION(prefix_1, "index-file-path", index_file_path, Separate, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Produce index data for file <path>", "<path>", nullptr)
OPTION(prefix_1, "index-file", index_file, Flag, modes_Group, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Produce index data for a source file", nullptr, nullptr)
OPTION(prefix_1, "index-ignore-system-modules", index_ignore_system_modules, Flag, INVALID, INVALID, nullptr, NoInteractiveOption, 0,
       "Avoid indexing system modules", nullptr, nullptr)
OPTION(prefix_1, "index-store-path", index_store_path, Separate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Store indexing data to <path>", "<path>", nullptr)
OPTION(prefix_1, "index-system-modules", index_system_modules, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emit index data for imported serialized swift system modules", nullptr, nullptr)
OPTION(prefix_1, "interpret", interpret, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Immediate mode", nullptr, nullptr)
OPTION(prefix_1, "I", I, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Add directory to the import search path", nullptr, nullptr)
OPTION(prefix_1, "i", i, Flag, modes_Group, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "j", j, JoinedOrSeparate, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0,
       "Number of commands to execute in parallel", "<n>", nullptr)
OPTION(prefix_1, "L=", L_EQ, Joined, INVALID, L, nullptr, FrontendOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "libc", libc, Separate, INVALID, INVALID, nullptr, 0, 0,
       "libc runtime library to use", nullptr, nullptr)
OPTION(prefix_1, "line-range", line_range, Separate, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "<start line>:<end line>. Formats a range of lines (1-based). Can only be used with one input file.", "<n:n>", nullptr)
OPTION(prefix_1, "link-objc-runtime", link_objc_runtime, Flag, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "lldb-repl", lldb_repl, Flag, modes_Group, INVALID, nullptr, NoBatchOption | HelpHidden, 0,
       "LLDB-enhanced REPL mode", nullptr, nullptr)
OPTION(prefix_1, "L", L, JoinedOrSeparate, linker_option_Group, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Add directory to library link search path", nullptr, nullptr)
OPTION(prefix_1, "l", l, Joined, linker_option_Group, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Specifies a library which should be linked against", nullptr, nullptr)
OPTION(prefix_1, "merge-modules", merge_modules, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Merge the input modules without otherwise processing them", nullptr, nullptr)
OPTION(prefix_1, "migrate-keep-objc-visibility", migrate_keep_objc_visibility, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "When migrating, add '@objc' to declarations that would've been implicitly visible in Swift 3", nullptr, nullptr)
OPTION(prefix_1, "migrator-update-sdk", migrator_update_sdk, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Does nothing. Temporary compatibility flag for Xcode.", nullptr, nullptr)
OPTION(prefix_1, "migrator-update-swift", migrator_update_swift, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Does nothing. Temporary compatibility flag for Xcode.", nullptr, nullptr)
OPTION(prefix_1, "module-cache-path", module_cache_path, Separate, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Specifies the Clang module cache path", nullptr, nullptr)
OPTION(prefix_1, "module-interface-preserve-types-as-written", module_interface_preserve_types_as_written, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "When emitting a module interface, preserve types as they were written in the source", nullptr, nullptr)
OPTION(prefix_1, "module-link-name=", module_link_name_EQ, Joined, INVALID, module_link_name, nullptr, FrontendOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "module-link-name", module_link_name, Separate, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Library to link against when using this module", nullptr, nullptr)
OPTION(prefix_1, "module-name=", module_name_EQ, Joined, INVALID, module_name, nullptr, FrontendOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "module-name", module_name, Separate, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Name of the module to build", nullptr, nullptr)
OPTION(prefix_1, "no-clang-module-breadcrumbs", no_clang_module_breadcrumbs, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Don't emit DWARF skeleton CUs for imported Clang modules. Use this when building a redistributable static archive.", nullptr, nullptr)
OPTION(prefix_1, "no-color-diagnostics", no_color_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Do not print diagnostics in color", nullptr, nullptr)
OPTION(prefix_1, "no-link-objc-runtime", no_link_objc_runtime, Flag, INVALID, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Don't link in additions to the Objective-C runtime", nullptr, nullptr)
OPTION(prefix_1, "no-serialize-debugging-options", no_serialize_debugging_options, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Never serialize options for debugging (default: only for apps)", nullptr, nullptr)
OPTION(prefix_1, "no-static-executable", no_static_executable, Flag, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Don't statically link the executable", nullptr, nullptr)
OPTION(prefix_1, "no-static-stdlib", no_static_stdlib, Flag, INVALID, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Don't statically link the Swift standard library", nullptr, nullptr)
OPTION(prefix_1, "no-stdlib-rpath", no_stdlib_rpath, Flag, INVALID, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Don't add any rpath entries.", nullptr, nullptr)
OPTION(prefix_1, "nostdimport", nostdimport, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Don't search the standard library import path for modules", nullptr, nullptr)
OPTION(prefix_1, "num-threads", num_threads, Separate, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Enable multi-threading and specify number of threads", "<n>", nullptr)
OPTION(prefix_1, "Onone", Onone, Flag, O_Group, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Compile without any optimization", nullptr, nullptr)
OPTION(prefix_1, "Oplayground", Oplayground, Flag, O_Group, INVALID, nullptr, HelpHidden | FrontendOption | ModuleInterfaceOption, 0,
       "Compile with optimizations appropriate for a playground", nullptr, nullptr)
OPTION(prefix_1, "Osize", Osize, Flag, O_Group, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Compile with optimizations and target small code size", nullptr, nullptr)
OPTION(prefix_1, "Ounchecked", Ounchecked, Flag, O_Group, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Compile with optimizations and remove runtime safety checks", nullptr, nullptr)
OPTION(prefix_1, "output-file-map=", output_file_map_EQ, Joined, INVALID, output_file_map, nullptr, NoInteractiveOption | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "output-file-map", output_file_map, Separate, INVALID, INVALID, nullptr, NoInteractiveOption | ArgumentIsPath, 0,
       "A file which specifies the location of outputs", "<path>", nullptr)
OPTION(prefix_1, "output-filelist", output_filelist, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Specify outputs in a file rather than on the command line", nullptr, nullptr)
OPTION(prefix_1, "output-request-graphviz", output_request_graphviz, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emit GraphViz output visualizing the request graph", nullptr, nullptr)
OPTION(prefix_1, "O", O, Flag, O_Group, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Compile with optimizations", nullptr, nullptr)
OPTION(prefix_1, "o", o, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption | AutolinkExtractOption | ModuleWrapOption | NoInteractiveOption | SwiftIndentOption | ArgumentIsPath, 0,
       "Write output to <file>", "<file>", nullptr)
OPTION(prefix_1, "package-description-version", package_description_version, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ModuleInterfaceOption, 0,
       "The version number to be applied on the input for the PackageDescription availability kind", "<vers>", nullptr)
OPTION(prefix_1, "parse-as-library", parse_as_library, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Parse the input file(s) as libraries, not scripts", nullptr, nullptr)
OPTION(prefix_1, "parse-sil", parse_sil, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Parse the input file as SIL code, not Swift source", nullptr, nullptr)
OPTION(prefix_1, "parse-stdlib", parse_stdlib, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ModuleInterfaceOption, 0,
       "Parse the input file(s) as the Swift standard library", nullptr, nullptr)
OPTION(prefix_1, "parseable-output", parseable_output, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Emit textual output in a parseable format", nullptr, nullptr)
OPTION(prefix_1, "parse", parse, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse input file(s)", nullptr, nullptr)
OPTION(prefix_1, "pc-macro", pc_macro, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Apply the 'program counter simulation' macro", nullptr, nullptr)
OPTION(prefix_1, "pch-disable-validation", pch_disable_validation, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable validating the persistent PCH", nullptr, nullptr)
OPTION(prefix_1, "pch-output-dir", pch_output_dir, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ArgumentIsPath, 0,
       "Directory to persist automatically created precompiled bridging headers", nullptr, nullptr)
OPTION(prefix_1, "playground-high-performance", playground_high_performance, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Omit instrumentation that has a high runtime performance impact", nullptr, nullptr)
OPTION(prefix_1, "playground", playground, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Apply the playground semantics and transformation", nullptr, nullptr)
OPTION(prefix_1, "prebuilt-module-cache-path=", prebuilt_module_cache_path_EQ, Joined, INVALID, prebuilt_module_cache_path, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "prebuilt-module-cache-path", prebuilt_module_cache_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Directory of prebuilt modules for loading module interfaces", nullptr, nullptr)
OPTION(prefix_1, "primary-filelist", primary_filelist, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Specify primary inputs in a file rather than on the command line", nullptr, nullptr)
OPTION(prefix_1, "primary-file", primary_file, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Produce output for this file, not the whole module", nullptr, nullptr)
OPTION(prefix_1, "print-ast", print_ast, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse and type-check input file(s) and pretty print AST(s)", nullptr, nullptr)
OPTION(prefix_1, "print-clang-stats", print_clang_stats, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Print Clang importer statistics", nullptr, nullptr)
OPTION(prefix_1, "print-inst-counts", print_inst_counts, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Before IRGen, count all the various SIL instructions. Must be used in conjunction with -print-stats.", nullptr, nullptr)
OPTION(prefix_1, "print-llvm-inline-tree", print_llvm_inline_tree, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Print the LLVM inline tree.", nullptr, nullptr)
OPTION(prefix_1, "print-stats", print_stats, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Print various statistics", nullptr, nullptr)
OPTION(prefix_1, "profile-coverage-mapping", profile_coverage_mapping, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Generate coverage data for use with profiled execution counts", nullptr, nullptr)
OPTION(prefix_1, "profile-generate", profile_generate, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Generate instrumented code to collect execution counts", nullptr, nullptr)
OPTION(prefix_1, "profile-stats-entities", profile_stats_entities, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Profile changes to stats in -stats-output-dir, subdivided by source entity", nullptr, nullptr)
OPTION(prefix_1, "profile-stats-events", profile_stats_events, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Profile changes to stats in -stats-output-dir", nullptr, nullptr)
OPTION(prefix_1, "profile-use=", profile_use, CommaJoined, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | ArgumentIsPath, 0,
       "Supply a profdata file to enable profile-guided optimization", "<profdata>", nullptr)
OPTION(prefix_1, "read-legacy-type-info-path=", read_legacy_type_info_path_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Read legacy type layout from the given path instead of default path", nullptr, nullptr)
OPTION(prefix_1, "remove-runtime-asserts", RemoveRuntimeAsserts, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Remove runtime safety checks.", nullptr, nullptr)
OPTION(prefix_1, "repl", repl, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoBatchOption | HelpHidden, 0,
       "REPL mode (the default if there is no input file)", nullptr, nullptr)
OPTION(prefix_1, "report-errors-to-debugger", report_errors_to_debugger, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Deprecated, will be removed in future versions.", nullptr, nullptr)
OPTION(prefix_1, "require-explicit-availability-target", require_explicit_availability_target, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Suggest fix-its adding @available(<target>, *) to public declarations without availability", "<target>", nullptr)
OPTION(prefix_1, "require-explicit-availability", require_explicit_availability, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Require explicit availability on public declarations", nullptr, nullptr)
OPTION(prefix_1, "resolve-imports", resolve_imports, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse and resolve imports in input file(s)", nullptr, nullptr)
OPTION(prefix_1, "resource-dir", resource_dir, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ArgumentIsPath, 0,
       "The directory that holds the compiler resource files", "</usr/lib/swift>", nullptr)
OPTION(prefix_1, "Rmodule-interface-rebuild", Rmodule_interface_rebuild, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Emits a remark if an imported module needs to be re-compiled from its module interface", nullptr, nullptr)
OPTION(prefix_1, "Rpass-missed=", Rpass_missed_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Report missed transformations by optimization passes whose name matches the given POSIX regular expression", nullptr, nullptr)
OPTION(prefix_1, "Rpass=", Rpass_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Report performed transformations by optimization passes whose name matches the given POSIX regular expression", nullptr, nullptr)
OPTION(prefix_1, "runtime-compatibility-version", runtime_compatibility_version, Separate, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Link compatibility library for Swift runtime version, or 'none'", nullptr, nullptr)
OPTION(prefix_1, "sanitize-coverage=", sanitize_coverage_EQ, CommaJoined, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Specify the type of coverage instrumentation for Sanitizers and additional options separated by commas", "<type>", nullptr)
OPTION(prefix_1, "sanitize=", sanitize_EQ, CommaJoined, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Turn on runtime checks for erroneous behavior.", "<check>", nullptr)
OPTION(prefix_1, "save-optimization-record-path", save_optimization_record_path, Separate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Specify the file name of any generated YAML optimization record", nullptr, nullptr)
OPTION(prefix_1, "save-optimization-record", save_optimization_record, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Generate a YAML optimization record file", nullptr, nullptr)
OPTION(prefix_1, "save-temps", save_temps, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Save intermediate compilation results", nullptr, nullptr)
OPTION(prefix_1, "sdk", sdk, Separate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Compile against <sdk>", "<sdk>", nullptr)
OPTION(prefix_1, "serialize-debugging-options", serialize_debugging_options, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Always serialize options for debugging (default: only for apps)", nullptr, nullptr)
OPTION(prefix_1, "serialize-diagnostics-path=", serialize_diagnostics_path_EQ, Joined, INVALID, serialize_diagnostics_path, nullptr, FrontendOption | NoBatchOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "serialize-diagnostics-path", serialize_diagnostics_path, Separate, INVALID, INVALID, nullptr, FrontendOption | NoBatchOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Emit a serialized diagnostics file to <path>", "<path>", nullptr)
OPTION(prefix_1, "serialize-diagnostics", serialize_diagnostics, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Serialize diagnostics in a binary format", nullptr, nullptr)
OPTION(prefix_1, "serialize-module-interface-dependency-hashes", serialize_module_interface_dependency_hashes, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "serialize-parseable-module-interface-dependency-hashes", serialize_parseable_module_interface_dependency_hashes, Flag, INVALID, serialize_module_interface_dependency_hashes, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "show-diagnostics-after-fatal", show_diagnostics_after_fatal, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Keep emitting subsequent diagnostics after a fatal error", nullptr, nullptr)
OPTION(prefix_1, "sil-debug-serialization", sil_debug_serialization, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Do not eliminate functions in Mandatory Inlining/SILCombine dead functions. (for debugging only)", nullptr, nullptr)
OPTION(prefix_1, "sil-inline-caller-benefit-reduction-factor", sil_inline_caller_benefit_reduction_factor, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Controls the aggressiveness of performance inlining in -Osize mode by reducing the base benefits of a caller (lower value permits more inlining!)", "<2>", nullptr)
OPTION(prefix_1, "sil-inline-threshold", sil_inline_threshold, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Controls the aggressiveness of performance inlining", "<50>", nullptr)
OPTION(prefix_1, "sil-merge-partial-modules", sil_merge_partial_modules, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Merge SIL from all partial swiftmodules into the final module", nullptr, nullptr)
OPTION(prefix_1, "sil-unroll-threshold", sil_unroll_threshold, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Controls the aggressiveness of loop unrolling", "<250>", nullptr)
OPTION(prefix_1, "sil-verify-all", sil_verify_all, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Verify SIL after each transform", nullptr, nullptr)
OPTION(prefix_1, "solver-disable-shrink", solver_disable_shrink, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Disable the shrink phase of expression type checking", nullptr, nullptr)
OPTION(prefix_1, "solver-enable-operator-designated-types", solver_enable_operator_designated_types, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Enable operator designated types in constraint solver", nullptr, nullptr)
OPTION(prefix_1, "solver-expression-time-threshold=", solver_expression_time_threshold_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "solver-memory-threshold", solver_memory_threshold, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Set the upper bound for memory consumption, in bytes, by the constraint solver", nullptr, nullptr)
OPTION(prefix_1, "solver-shrink-unsolved-threshold", solver_shrink_unsolved_threshold, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Set The upper bound to number of sub-expressions unsolved before termination of the shrink phrase", nullptr, nullptr)
OPTION(prefix_1, "stack-promotion-limit", stack_promotion_limit, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Limit the size of stack promoted objects to the provided number of bytes.", nullptr, nullptr)
OPTION(prefix_1, "static-executable", static_executable, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Statically link the executable", nullptr, nullptr)
OPTION(prefix_1, "static-stdlib", static_stdlib, Flag, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0,
       "Statically link the Swift standard library", nullptr, nullptr)
OPTION(prefix_1, "static", static, Flag, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption | NoInteractiveOption, 0,
       "Make this module statically linkable and make the output of -emit-library a static library.", nullptr, nullptr)
OPTION(prefix_1, "stats-output-dir", stats_output_dir, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | ArgumentIsPath, 0,
       "Directory to write unified compilation-statistics files to", nullptr, nullptr)
OPTION(prefix_1, "supplementary-output-file-map", supplementary_output_file_map, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Specify supplementary outputs in a file rather than on the command line", nullptr, nullptr)
OPTION(prefix_1, "suppress-static-exclusivity-swap", suppress_static_exclusivity_swap, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Suppress static violations of exclusive access with swap()", nullptr, nullptr)
OPTION(prefix_1, "suppress-warnings", suppress_warnings, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Suppress all warnings", nullptr, nullptr)
OPTION(prefix_1, "swift-version", swift_version, Separate, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Interpret input according to a specific Swift language version number", "<vers>", nullptr)
OPTION(prefix_1, "switch-checking-invocation-threshold=", switch_checking_invocation_threshold_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "S", S, Flag, modes_Group, emit_assembly, nullptr, FrontendOption | NoInteractiveOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "tab-width", tab_width, Separate, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "Width of tab character.", "<n>", nullptr)
OPTION(prefix_1, "target-cpu", target_cpu, Separate, INVALID, INVALID, nullptr, FrontendOption | ModuleInterfaceOption, 0,
       "Generate code for a particular CPU variant", nullptr, nullptr)
OPTION(prefix_2, "target=", target_legacy_spelling, Joined, INVALID, target, nullptr, FrontendOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "target", target, Separate, INVALID, INVALID, nullptr, FrontendOption | ModuleWrapOption | ModuleInterfaceOption, 0,
       "Generate code for the given target <triple>, such as x86_64-apple-macos10.9", "<triple>", nullptr)
OPTION(prefix_1, "tbd-compatibility-version=", tbd_compatibility_version_EQ, Joined, INVALID, tbd_compatibility_version, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "tbd-compatibility-version", tbd_compatibility_version, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "The compatibility_version to use in an emitted TBD file", "<version>", nullptr)
OPTION(prefix_1, "tbd-current-version=", tbd_current_version_EQ, Joined, INVALID, tbd_current_version, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "tbd-current-version", tbd_current_version, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "The current_version to use in an emitted TBD file", "<version>", nullptr)
OPTION(prefix_1, "tbd-install_name=", tbd_install_name_EQ, Joined, INVALID, tbd_install_name, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "tbd-install_name", tbd_install_name, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "The install_name to use in an emitted TBD file", "<path>", nullptr)
OPTION(prefix_1, "toolchain-stdlib-rpath", toolchain_stdlib_rpath, Flag, INVALID, INVALID, nullptr, HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Add an rpath entry for the toolchain's standard library, rather than the OS's", nullptr, nullptr)
OPTION(prefix_1, "tools-directory", tools_directory, Separate, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild | ArgumentIsPath, 0,
       "Look for external executables (ld, clang, binutils) in <directory>", "<directory>", nullptr)
OPTION(prefix_1, "trace-stats-events", trace_stats_events, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Trace changes to stats in -stats-output-dir", nullptr, nullptr)
OPTION(prefix_1, "track-system-dependencies", track_system_dependencies, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Track system dependencies while emitting Make-style dependencies", nullptr, nullptr)
OPTION(prefix_1, "triple", triple, Separate, INVALID, target, nullptr, FrontendOption | NoDriverOption, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "type-info-dump-filter=", type_info_dump_filter_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "One of 'all', 'resilient' or 'fragile'", nullptr, nullptr)
OPTION(prefix_1, "typecheck", typecheck, Flag, modes_Group, INVALID, nullptr, FrontendOption | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Parse and type-check input file(s)", nullptr, nullptr)
OPTION(prefix_1, "typo-correction-limit", typo_correction_limit, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Limit the number of times the compiler will attempt typo correction to <n>", "<n>", nullptr)
OPTION(prefix_1, "update-code", update_code, Flag, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Update Swift code", nullptr, nullptr)
OPTION(prefix_1, "use-jit", use_jit, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Register Objective-C classes as if the JIT were in use", nullptr, nullptr)
OPTION(prefix_1, "use-ld=", use_ld, Joined, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0,
       "Specifies the linker to be used", nullptr, nullptr)
OPTION(prefix_1, "use-malloc", use_malloc, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Allocate internal data structures using malloc (for memory debugging)", nullptr, nullptr)
OPTION(prefix_1, "use-tabs", use_tabs, Flag, code_formatting_Group, INVALID, nullptr, NoInteractiveOption | NoBatchOption | SwiftIndentOption, 0,
       "Use tabs for indentation.", nullptr, nullptr)
OPTION(prefix_1, "validate-tbd-against-ir=", validate_tbd_against_ir_EQ, Joined, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Compare the symbols in the IR against the TBD file that would be generated.", "<level>", nullptr)
OPTION(prefix_1, "value-recursion-threshold", value_recursion_threshold, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden | DoesNotAffectIncrementalBuild, 0,
       "Set the maximum depth for direct recursion in value types", nullptr, nullptr)
OPTION(prefix_1, "verify-apply-fixes", verify_apply_fixes, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Like -verify, but updates the original source file", nullptr, nullptr)
OPTION(prefix_1, "verify-debug-info", verify_debug_info, Flag, INVALID, INVALID, nullptr, NoInteractiveOption | DoesNotAffectIncrementalBuild, 0,
       "Verify the binary representation of debug output.", nullptr, nullptr)
OPTION(prefix_1, "verify-generic-signatures", verify_generic_signatures, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Verify the generic signatures in the given module", "<module-name>", nullptr)
OPTION(prefix_1, "verify-ignore-unknown", verify_ignore_unknown, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Allow diagnostics for '<unknown>' location in verify mode", nullptr, nullptr)
OPTION(prefix_1, "verify-syntax-tree", verify_syntax_tree, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Verify that no unknown nodes exist in the libSyntax tree", nullptr, nullptr)
OPTION(prefix_1, "verify-type-layout", verify_type_layout, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Verify compile-time and runtime type layout information for type", "<type>", nullptr)
OPTION(prefix_1, "verify", verify, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Verify diagnostics against expected-{error|warning|note} annotations", nullptr, nullptr)
OPTION(prefix_3, "version", version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print version information and exit", nullptr, nullptr)
OPTION(prefix_1, "vfsoverlay=", vfsoverlay_EQ, Joined, INVALID, vfsoverlay, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "vfsoverlay", vfsoverlay, JoinedOrSeparate, INVALID, INVALID, nullptr, FrontendOption | ArgumentIsPath, 0,
       "Add directory to VFS overlay file", nullptr, nullptr)
OPTION(prefix_1, "v", v, Flag, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0,
       "Show commands to run and use verbose output", nullptr, nullptr)
OPTION(prefix_1, "warn-if-astscope-lookup", warn_if_astscope_lookup, Flag, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption, 0,
       "Print a warning if ASTScope lookup is used", nullptr, nullptr)
OPTION(prefix_1, "warn-implicit-overrides", warn_implicit_overrides, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Warn about implicit overrides of protocol members", nullptr, nullptr)
OPTION(prefix_1, "warn-long-expression-type-checking=", warn_long_expression_type_checking_EQ, Joined, INVALID, warn_long_expression_type_checking, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "warn-long-expression-type-checking", warn_long_expression_type_checking, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Warns when type-checking a function takes longer than <n> ms", "<n>", nullptr)
OPTION(prefix_1, "warn-long-function-bodies=", warn_long_function_bodies_EQ, Joined, INVALID, warn_long_function_bodies, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "warn-long-function-bodies", warn_long_function_bodies, Separate, INVALID, INVALID, nullptr, FrontendOption | NoDriverOption | HelpHidden, 0,
       "Warns when type-checking a function takes longer than <n> ms", "<n>", nullptr)
OPTION(prefix_1, "warn-swift3-objc-inference-complete", warn_swift3_objc_inference_complete, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Warn about deprecated @objc inference in Swift 3 for every declaration that will no longer be inferred as @objc in Swift 4", nullptr, nullptr)
OPTION(prefix_1, "warn-swift3-objc-inference-minimal", warn_swift3_objc_inference_minimal, Flag, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0,
       "Warn about deprecated @objc inference in Swift 3 based on direct uses of the Objective-C entrypoint", nullptr, nullptr)
OPTION(prefix_1, "warn-swift3-objc-inference", warn_swift3_objc_inference, Flag, INVALID, warn_swift3_objc_inference_complete, nullptr, FrontendOption | DoesNotAffectIncrementalBuild | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "warnings-as-errors", warnings_as_errors, Flag, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Treat warnings as errors", nullptr, nullptr)
OPTION(prefix_1, "whole-module-optimization", whole_module_optimization, Flag, INVALID, INVALID, nullptr, FrontendOption | NoInteractiveOption, 0,
       "Optimize input files together instead of individually", nullptr, nullptr)
OPTION(prefix_1, "wmo", wmo, Flag, INVALID, whole_module_optimization, nullptr, FrontendOption | NoInteractiveOption | HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "working-directory=", working_directory_EQ, Joined, INVALID, working_directory, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "working-directory", working_directory, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Resolve file paths relative to the specified directory", "<path>", nullptr)
OPTION(prefix_1, "Xcc", Xcc, Separate, INVALID, INVALID, nullptr, FrontendOption, 0,
       "Pass <arg> to the C/C++/Objective-C compiler", "<arg>", nullptr)
OPTION(prefix_1, "Xclang-linker", Xclang_linker, Separate, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Pass <arg> to Clang when it is use for linking.", "<arg>", nullptr)
OPTION(prefix_1, "Xfrontend", Xfrontend, Separate, INVALID, INVALID, nullptr, HelpHidden, 0,
       "Pass <arg> to the Swift frontend", "<arg>", nullptr)
OPTION(prefix_1, "Xlinker", Xlinker, Separate, INVALID, INVALID, nullptr, DoesNotAffectIncrementalBuild, 0,
       "Specifies an option which should be passed to the linker", nullptr, nullptr)
OPTION(prefix_1, "Xllvm", Xllvm, Separate, INVALID, INVALID, nullptr, FrontendOption | HelpHidden, 0,
       "Pass <arg> to LLVM.", "<arg>", nullptr)
OPTION(prefix_2, "", _DASH_DASH, RemainingArgs, INVALID, INVALID, nullptr, FrontendOption | DoesNotAffectIncrementalBuild, 0, nullptr, nullptr, nullptr)
#endif // OPTION

#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
