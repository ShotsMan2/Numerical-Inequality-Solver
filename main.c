#include <stdio.h>
#include <stdlib.h>

int main()
{
    double OgrenciNumarasi, t, x, y, a;
    int kalan, bolum, sayi;

    OgrenciNumarasi = 25010.1242;
    printf("OgrenciNumarasi: %f\n", OgrenciNumarasi);

    sayi = OgrenciNumarasi * 10000;

    bolum = sayi / 100000000;
    t += bolum;
    kalan = sayi % 100000000;

    bolum = kalan / 10000000;
    t += bolum;
    kalan = kalan % 10000000;

    bolum = kalan / 1000000;
    t += bolum;
    kalan = kalan % 1000000;

    bolum = kalan / 100000;
    t += bolum;
    kalan = kalan % 100000;

    bolum = kalan / 10000;
    t += bolum;
    kalan = kalan % 10000;

    t = 0;

    bolum = kalan / 1000;
    t += bolum;
    kalan = kalan % 1000;

    bolum = kalan / 100;
    t += bolum;
    kalan = kalan % 100;

    bolum = kalan / 10;
    t += bolum;
    kalan = kalan % 10;

    t += kalan;

    printf("t: %f\n\n", t);

    x = 1;
    y = 0;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    x = 2;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    x = 3;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    x = 4;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    x = 5;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    x = 6;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem en yakin degere ulasmistir.\n");

    x = 7;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n\n");

    x = 6;
    printf("x=%f\n\n", x);

    y = 1;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n");

    y = 2;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmistir.\n");

    y = 3;
    a = (x * x - 0.2 * y * y * y - 3 * t) / 8;
    printf("x:%f\t", x);
    printf("y:%f\t", y);
    printf("sonuc:%f\t", a);
    printf("denklem saglanmamistir.\n\n");

    y = 2;
    printf("y=%f\n", y);

    return 0;
}
