# Try Out Development Containers: C++

This is a sample project that lets you try out the **[VS Code Remote - Containers](https://aka.ms/vscode-remote/containers)** extension in a few easy steps.

> **Note:** If you're following the quick start, you can jump to the [Things to try](#things-to-try) section.

## Setting up the development container

Follow these steps to open this sample in a container:

1. If this is your first time using a development container, please follow the [getting started steps](https://aka.ms/vscode-remote/containers/getting-started).

2. To use this repository, you can either open the repository in an isolated Docker volume:

    - Press <kbd>F1</kbd> and select the **Remote-Containers: Try a Sample...** command.
    - Choose the "C++" sample, wait for the container to start and try things out!
        > **Note:** Under the hood, this will use **Remote-Containers: Open Repository in Container...** command to clone the source code in a Docker volume instead of the local filesystem.

   Or open a locally cloned copy of the code:

   - Clone this repository to your local filesystem.
   - Press <kbd>F1</kbd> and select the **Remote-Containers: Open Folder in Container...** command.
   - Select the cloned copy of this folder, wait for the container to start, and try things out!

## Things to try

Once you have this sample opened in a container, you'll be able to work with it like you would locally.

> **Note:** This container runs as a non-root user with sudo access by default. Comment out `"remoteUser": "vscode"` in `.devcontainer/devcontainer.json` if you'd prefer to run as root.

Some things to try:

1. **Edit:**
   - Open `main.cpp`
   - Try adding some code and check out the language features.
1. **Terminal:** Press <kbd>ctrl</kbd>+<kbd>shift</kbd>+<kbd>\`</kbd> and type `uname` and other Linux commands from the terminal window.
1. **Build, Run, and Debug:**
   - Open `main.cpp`
   - Add a breakpoint (e.g. on line 7).
   - Press <kbd>F5</kbd> to launch the app in the container.
   - Once the breakpoint is hit, try hovering over variables, examining locals, and more.


## atcoder-cli 事前設定

ref:
- https://qiita.com/gomatofu/items/1adae9b7cd79b0f8044f
- https://qiita.com/YUM_3/items/6910b9d14ea544d643f3

/workspaces/atcoder_cpp で作業

1. 以下のコマンドを実行し、AtCoderログイン設定  
   `$ add login`
1. 以下のコマンド実行し、再びAtCoderアカウント入力  
   `$ oj login https://beta.atcoder.jp/`
1. 全問インストールする設定にする  
   `$ acc config default-task-choice all`
1. テンプレート設定用フォルダ確認  
   ``$ ls -l `acc config-dir` ``
1. テンプレート設定のコピー  
   ``$ cp -r ./config/. `acc config-dir` `` 
1. テンプレート設定用フォルダ配下にコピーされていること確認  
   ``$ ls -l `acc config-dir` ``
1. デフォルトテンプレートの設定  
   `$ acc config default-template cpp`

## コンテスト参加時

1. カレントディレクトリ移動  
   `$ cd contest`
   - ディレクトリは /workspaces/atcoder_cpp/contest となる想定
1. 問題の取得
   `$ acc new コンテストID`
   - 例: `$ acc new abc123`
1. フォルダ移動  
   `$ cd コンテストID`
   - 例: `$ cd abc123`
1. main.cppを開いてコーディング
1. コンパイルし、a.outを生成する
1. テスト  
   `oj t -d ./tests/`
   - スクリプト言語の場合は `oj t -c "pypy3 main.py" -d ./tests/` のようになる
1. 提出
   `acc s main.cpp`

## Contributing

This project welcomes contributions and suggestions. Most contributions require you to agree to a
Contributor License Agreement (CLA) declaring that you have the right to, and actually do, grant us
the rights to use your contribution. For details, visit https://cla.microsoft.com.

When you submit a pull request, a CLA-bot will automatically determine whether you need to provide
a CLA and decorate the PR appropriately (e.g., label, comment). Simply follow the instructions
provided by the bot. You will only need to do this once across all repos using our CLA.

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/) or
contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

## License

Copyright © Microsoft Corporation All rights reserved.<br />
Licensed under the MIT License. See LICENSE in the project root for license information.
