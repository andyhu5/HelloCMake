### add the following lines to your CMakePreset.json file ,vcpkg.cmake location may vary

```json
"toolchainFile": "E:\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake",
```

```json
; create vcpkg.json in your project root directory with the following content
{
	"name": "myproject",
	"version-string": "0.1.0",
	"dependencies": [
		"fmt",
		"spdlog"
	]
}
```
