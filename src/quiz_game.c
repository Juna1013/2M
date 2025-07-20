#include <stdio.h>

int main(void)
{
    int res;

    printf("簡易テスト：4つの選択肢から解答を1つ選んでください！\n");
    printf("ボーナス問題もあります！\n");

    printf("以下の問題に答えてください。\n");
    printf("各問題には選択肢が4つあります。選んでください。\n");
    printf("※選択肢は必ず半角数字で解答してください。\n");

    scanf("%d", &res);

    /*1問目*/
    printf("第1問：オーストラリアの首都はどこでしょうか？\n");
    printf("①キャンベラ\n");
    printf("②オタワ\n");
    printf("③モスクワ\n");
    printf("④ニューヨーク\n");

    int res2;

    if (res == 1) {
        printf("正解です！\n");
        res2 = 1;
    } else {
        printf("残念！不正解です…正解は①でした！\n");
        res2 = 0;
    }

    /*2問目*/
    int apple;

    printf("第2問：動物は冬眠する際にどの方角に頭を向ける？\n");
    printf("①北\n");
    printf("②東\n");
    printf("③南\n");
    printf("④西\n");

    int apple2;

    if (apple == 3) {
        printf("正解です！\n");
        apple2 = 1;
    } else {
        printf("残念！不正解です…正解は③でした！\n");
        apple2 = 0;
    }

    if (res == 1 && apple == 3) {
        printf("2問連続正解！すごいですね！\n");
    }

    /*3問目*/
    int banana;

    printf("第3問：道路の舗装などに使われるアスファルトはいつから使われていたでしょうか？\n");
    printf("①500年前\n");
    printf("②1000年前\n");
    printf("③2000年前\n");
    printf("④5000年前\n");

    int banana2;

    if (banana == 3) {
        printf("正解です！\n");
        banana2 = 1;
    } else {
        printf("残念！不正解です…正解は③でした！\n");
        banana2 = 0;
    }

    if (res == 1 && apple == 3 && banana == 3) {
        printf("3問連続正解です！あと2問！\n");
    }

    /*4問目*/
    int coffee;

    printf("第4問：日本で最も面積の小さい都道府県はどこでしょうか？\n");
    printf("①大阪府\n");
    printf("②香川県\n");
    printf("③長崎県\n");
    printf("④沖縄県\n");

    int coffee2;

    if (coffee == 2) {
        printf("正解です！\n");
        coffee2 = 1;
    } else {
        printf("残念！不正解です…正解は②でした！\n");
        coffee2 = 0;
    }

    if (res == 1 && apple == 3 && banana == 3 && coffee == 2) {
        printf("4問連続正解です！次がラストです！\n");
    }

    /*5問目*/
    int dessrt;

    printf("第5問：以下の4つの惑星の中で最も密度の低いものはどれでしょうか？\n");
    printf("①火星\n");
    printf("②金星\n");
    printf("③土星\n");
    printf("④木星\n");

    int dessrt2;

    if (dessrt == 3) {
        printf("正解です！\n");
        dessrt2 = 1;
    } else {
        printf("残念！不正解です…正解は③でした！\n");
        dessrt2 = 0;
    }

    int x;
    x = res2 + apple2 + banana2 + coffee2 + dessrt2;

    printf("あなたの正解数は%d問です！\n", x);
      if (x == 5) {
        printf("全問正解！おめでとうございます！\n");
        printf("ボーナスステージを楽しんでください！\n");

        /*ボーナス問題*/
        printf("ボーナスステージへようこそ！\n");
        printf("ボーナスクイズ：世界最古のアイドルが生まれたはどこのでしょう？\n");

        int idor;

        printf("①韓国\n");
        printf("②日本\n");
        printf("③フランス\n");
        printf("④中国\n");

        if (idor == 4) {
            printf("正解です！\n");
            printf("全問正解おめでとうございます！\n");
        }
    } else {
        printf("お疲れ様でした！\n");
    }
    return 0;
}

