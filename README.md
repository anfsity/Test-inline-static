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

- windows

```bash
MSBuild version 17.14.10+8b8e13593 for .NET Framework

  Scanning sources for module dependencies...
  core.vcxproj -> F:\Test-inline-static\build\Debug\core.dll
  Scanning sources for module dependencies...
  Scanning sources for module dependencies...
LINK : fatal error LNK1104: cannot open file 'Debug\core.lib' [F:\Test-inline-static\build\plugin_a.vcxproj]
LINK : fatal error LNK1104: cannot open file 'Debug\core.lib' [F:\Test-inline-static\build\plugin_b.vcxproj]
```