
# CRC64 Tekito

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/example/repository/blob/main/LICENSE)

CRC64 Tekitoは、CRC64チェックサムを計算するための軽量なC++ライブラリです。このライブラリは、コンパイル時に与えられた文字列のCRC64チェックサムを計算するための2つのconstexpr関数「crc64_strlen」と「crc64」を提供しています。

## 特徴

- **コンパイル時計算**: CRC64チェックサムはコンパイル時に計算できるため、ランタイム計算が不要です。
- **効率的な実装**: 実装は効率的に設計され、パフォーマンスが最適化されています。
- **簡単な統合**: ライブラリは1つのヘッダーファイルで構成されており、プロジェクトに簡単に組み込むことができます。

## 使用方法

CRC64 Tekitoをプロジェクトで使用するには、以下の手順に従ってください：

1. `crc64_tekito.h`ヘッダーファイルをプロジェクトディレクトリにコピーします。
2. ソースコードでヘッダーファイルをインクルードします：

```cpp
#include "crc64_tekito.h"
```

3. `crc64`関数を呼び出して、CRC64チェックサムを計算したい文字列を渡します：

```cpp
const char* myString = "Hello, CRC64 Tekito!";
uint64_t checksum = crc64_tekito::crc64(myString);
```

これで完了です！`checksum`変数に計算されたCRC64チェックサムが格納されます。

## 使用例

CRC64 Tekitoの使用例を以下に示します：

```cpp
#include "crc64_tekito.h"
#include <iostream>

int main() {
    const char* myString = "Hello, CRC64 Tekito!";
    uint64_t checksum = crc64_tekito::crc64(myString);

    std::cout << "CRC64チェックサム: " << checksum << std::endl;

    return 0;
}
```

## ライセンス

このプロジェクトはMITライセンスの下で提供されています。詳細については、[LICENSE](LICENSE)ファイルを参照してください。

## 貢献

CRC64 Tekitoへの貢献は歓迎します！問題点や改善案がある場合は、問題をオープンしたり、プルリクエストを提出したりしてください。

## 参考文献
https://en.wikipedia.org/wiki/Cyclic_redundancy_check
http://www.sunshine2k.de/articles/coding/crc/understanding_crc.html
