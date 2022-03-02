* isalpha
Fonksiyona verilen c parametre değerinin alfabede bulunan bir harf olup olmadığını kontrol eder.
çıktı: 1 or 0
----------------------
* isdigit
Fonksiyona verilen c parametre değerinin bir rakam olup olmadığını kontrol eder.
çıktı: 1 or 0
----------------------
* isalnum
Fonksiyona verilen c parametre değerinin alfabede bulunan bir harf ve bir rakam olup olmadığını kontrol eder.

örnek çıktı:
7 alfanumerik bir karakterdir!
& alfanumerik bir karakter değildir!
çıktı: 1 or 0
----------------------
* isascii
Bir karakterin Ascii olup olmadığını analiz edin.
çıktı: 1 or 0
----------------------
* isprint
Fonksiyona verilen c parametre değerinin yazdırılabilir bir karakter olup olmadığını kontrol eder.
çıktı: 1 or 0
----------------------
* strlen
Str parametresi ile gösterilen ve boş bir karakter ('\0') ile sonlandırılmış karakter dizisinin uzunluğunu, dizi sonundaki boş karakter hariç olmak üzere, hesaplar.
çıktı: str dizisinin uzunluğu kadadar çıktı verir
----------------------
* memset
C parametresi ile gösterilen bellek bölgesindeki karakteri (unsigned char), dest parametresindeki bellek bölgesinin ilk n parametre değeri kadar byte'ına kopyalar.
memset() , bir bellek bloğunu belirli bir değerle doldurmak için kullanılır.

ft_memset(void *dest, int c, size_t n);

memset(cdizi, 'x', 5);
çıktı: 
cdizi bellek içeriği: Bilgisayar
cdizi bellek içeriği: xxxxxsayar
----------------------
* bzero
??
----------------------
* memcpy
Src parametresi ile gösterilen bellek bölgesindeki karakterleri, n parametre değeri kadar uzunlukta, dest parametresindeki bellek bölgesine kopyalar.
void* memcpy(void *dest, const void *src, size_t n);

int main( void )
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    memset(dest, '\0', 40);
    memcpy(dest, cp, 40);
    printf("%s\n", dest);

    memset(dest, '\0', 40);
    memccpy(dest, cp, '&', 40);
    printf("%s", dest);

    return 0;
}
çıktı:
Bilgisayar&Programlama
Bilgisayar&
----------------------
* memmove
void* memmove(void *dest, const void *src, size_t n);

Src parametresi ile gösterilen bellek bölgesindeki karakterleri, n parametre değeri kadar uzunlukta, dest parametresindeki bellek bölgesine kopyalar.

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    memmove(cdizi1, cdizi2, 10);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}
çıktı:
cdizi1 bellek içeriği: Bilgisayar, cdizi2 bellek içeriği: Programlar
cdizi1 bellek içeriği: Programlar, cdizi2 bellek içeriği: Programlar
----------------------
* strlcpy
dizileri copyalamaya yarar
----------------------
* strlcat
dizileri kemeye yarar
----------------------
* toupper
Küçük harfleri büyük harf yapar
----------------------
* tolower
Büyük harfleri küçük harf yapar
----------------------
* strchr
Str parametresi ile gösterilen karakter dizisinde c parametresi ile gösterilen değerin (unsigned char olarak değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char *ret;

    ret = strchr(cdizi, 's');

    printf("Bulunan karakterden itibaren dizi içeriği: %s", ret);

    return 0;
}
Bulunan karakterden itibaren dizi içeriği: sayar
----------------------
* strrchr
Str parametresi ile gösterilen karakter dizisinde c parametresi ile gösterilen değerin (unsigned char olarak değerlendirilir) son geçtiği yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char cd = 'i';
    char *ret;

    ret = strrchr(cdizi, cd);

    printf("Bulunan son %c karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}
Çıktı:
Bulunan son i karakterinden itibaren dizi içeriği: isayar
----------------------
* strncmp
Str1 parametresi ile gösterilen karakter dizisinin, n parametre değeri kadar ilk karakterini, str2 parametresi ile gösterilen karakter dizisi ile karşılaştırır. Eğer her iki karakter dizisindeki tüm karakterler aynı ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.

Fonksiyon str1 ve str2 parametreleri ile gösterilen karakter dizilerini ilk karakterden itibaren karşılaştırmaya başlar. Birbirlerine eşitse, karakterler farklı olana veya karakter dizisinin sonunu gösteren boş bir karakterle karşılaşana veya her iki karakter dizisinde n parametre değeri kadar eşleşene kadar karşılaştırma işlemine devam eder.

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = strncmp(cp1, cp2, 5);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}
Çıktı:
cp1 karakter dizisi cp2 karakter dizisine eşittir!
----------------------
* memchr
Ptr parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar ilk byte'ında c parametresi ile gösterilen değerin (unsigned char olarak değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.

int main( void )
{
    const char *cp = "Bilgisayar";
    const char cd = 'g';

    printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));

    return 0;
}
v
Çıktı:
g karakterinin bellek adresi: 00403027
----------------------
* memcmp
Ptr1 parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar ilk byte'ını ptr2 parametresi ile gösterilen bellek bölgesi ile karşılaştırır. Eğer her iki bellek bölgesindeki tüm değerler aynı ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.

<0 ise ptr1 bellek içeriği ptr2 bellek içeriğinden küçüktür.
>0 ise ptr2 bellek içeriği ptr1 bellek içeriğinden küçüktür.
=0 ise ptr1 bellek içeriği ptr2 bellek içeriğine eşittir.

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = memcmp(cp1, cp2, 10);

    if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
    else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");

    return 0;
}

Çıktı:
cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!
----------------------
* strnstr
Uzunluğu sınırlı bir dizedeki ilk alt dizeyi bulun

char * strnstr(const char * s1, const char * s2, size_t len);

s1
Aranacak dize
s2
Aranan dize
len
aranacak maksimum karakter sayısı
----------------------
* atoi
Str parametresi ile gösterilen karakter dizisini int bir değere çevirir.

325325 çıktısı 325325
7ce8521 çıktısı 7
a4325 çıktısı: 'boş'
----------------------
* calloc
malloc gibi bellekten yer ayırır. mallocta ayrılan değerler rasgele olurken calloc da oluşturulan belleğin alanları 0 dır

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *a = malloc(20*sizeof(int));
    int *b = calloc(20, sizeof(int));

    int s;
    for (s = 0; s<20; s++)
    {
        printf("b[%d] = %d \t a[%d] = %d \n",s,b[s],s,a[s]);
    }

    free(a);
    free(b);
    return 0;
}
Çıktı:
b[0] = 0         a[0] = 0 
b[1] = 0         a[1] = 0 
b[2] = 0         a[2] = 0 
b[3] = 0         a[3] = 0 
b[4] = 0         a[4] = 0 
----------------------
* strdup

ft_substr
/*
	ft_substr()
	gönderilen dizinin x elemanından başlayarak y elemanına kadar geri dönderir
	src[] = "0123456789";
	ft_substr(src,0,2);
	çıktısı 01 olur
*/
----------------------
ft_strjoin
/*
**s1 dizsi ve s2 dizisini birleştirir.
**s1 ve s2 dizisini kontrol eder boş ise 0 gönderir
**ptr_str dizisine malloc ile s1 ve s2 dizisinin uzunluğu +1 fazlası kadar alan açar.
**ptr_str dizisine s1 ve s2 kopyalanır sonun '\0' koyar return(ptr_str)
*/
----------------------
