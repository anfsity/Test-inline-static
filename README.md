- linux

```bash
[Registry] Trying to register: 'constexpr const char* extract_name() [with auto Func = my_foo]' with factory ptr: 0x7f80262c29b8
  -> SUCCESS! Added to dictionary
=== Start ===
Inside plugin A
Inside plugin B
=== End ===
[Registry] Final Dictionary Size: 1
```

- windows (not export)

```bash
MSBuild version 17.14.10+8b8e13593 for .NET Framework

  Scanning sources for module dependencies...
  core.vcxproj -> F:\Test-inline-static\build\Debug\core.dll
  Scanning sources for module dependencies...
  Scanning sources for module dependencies...
LINK : fatal error LNK1104: cannot open file 'Debug\core.lib' [F:\Test-inline-static\build\plugin_a.vcxproj]
LINK : fatal error LNK1104: cannot open file 'Debug\core.lib' [F:\Test-inline-static\build\plugin_b.vcxproj]
```

- windows (export)

```bash
[Registry] Trying to register: 'const char *__cdecl extract_name<void __cdecl my_foo(void)>(void)' with factory ptr: 0x7ffb06be1226
  -> SUCCESS! Added to dictionary
[Registry] Trying to register: 'const char *__cdecl extract_name<void __cdecl my_foo(void)>(void)' with factory ptr: 0x7ffb06c11226
  -> IGNORED! Key already exists. Kept old ptr: 0x7ffb06be1226
=== Start ===
Inside plugin A
Inside plugin B
=== End ===
[Registry] Final Dictionary Size: 1
```