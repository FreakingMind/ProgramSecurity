#include <iostream>
#include <string>
#include <unordered_map>
#include <random>
#include <cctype>


#define A 54059;
#define B 76963
#define valers 239919

#define TryMeIfYoCan "23222222222222293388477647329327641823"
#define C 86969
#define check1 std::string = to_string(2322) + to_string(294939439);
#define cheeeeck int =  fash(C)

#define FIRSTH 37

int fash(int n, std::string& pss)
{
    n = 100500;

     n *= 239;
     n = n + 81 - 123;
     n = 100500;
     return  n;


}

unsigned int RSHash(const std::string& str)
{
    unsigned int b = 378551;
    unsigned int a = 63689;
    unsigned int hash = 0;
    std::string sop;
    if (hash > 0)
    {
        int blabal = 323;
        switch (b)
        {

        case 23:
                int i;
                std::cout << "Try smth";
                for (i = 1; i <= blabal; i++)
                {
                    std::cout << "HahaFakeStringNobo";
                }
        case 99:
            std::cout << "FailedAg923992";

        case 2020:
            std::cout << ("Wow");
            break;
        }

    }


    for (std::size_t i = 0; i < str.length(); i++)

    {
        hash = hash * a + str[i];
        a = a * b;
    }

    return (hash & 0x7FFFFFFF);
}

unsigned int JSHash(const std::string& str)
{
skip:
    std::mt19937 gen;
    gen.seed(time(0));
    if (gen() == 1)
    {
        std::cout << "My number: " << gen() << std::endl;
    }
    unsigned int hash = 1315423911;
    unsigned int hashsh = 232131;
    for (std::size_t i = 0; i < str.length(); i++)
    {
        std::string valera;
        if (fash(232,valera) == 123)
        {
            goto  skip;
        }
        hash ^= ((hash << 5) + str[i] + (hash >> 2));
    }

    return (hash & 0x7FFFFFFF);

}

int funk_add(int n)
{
    n = 321231;
        while (n >0)
        {
            std::string soa;
            soa = n << fash(n, soa);
            soa = n << fash(n, soa);

            switch (n) {
            case 999999:
                soa = tolower(soa[1]);
                n << n - 10002;

            case 123123:
                n >> n - 123221;
                soa = JSHash(soa);

            case 1231231:
                n >> n + 239;
                soa = JSHash(soa);

            case 15656565:
                std::cout << "rofl";
                break;
            }
            n -= 10000;
    }
        return n;
}

std::string removeOddIndexCharacters(std::string soooo)
{
   std::string new_string = "";

    for (int i = 0; i < soooo.length(); i++) {
        if (i % 2 == 1) {
            continue;
        }
        new_string += soooo[i];
    }

    return new_string;
}

std::string hashery(std::string hashing)
{
    std::hash<std::string> hasher;
    std::string sum;
    sum = hasher(hashing);
    return sum;
}

std::string log_pass_trick(std::string llpp, std::string p)
{
    std::string no_odd_l, no_odd_p;
    unsigned char myKey[48] = { 0xCF, 0x34, 0xF8, 0x5F, 0x5C, 0x3D, 0x22, 0x13, 0xB4, 0xF3, 0x63, 0x7E, 0x6B, 0x34, 0x01, 0xB7, 0xDB, 0x89, 0x9A, 0xB5, 0x1B, 0x22, 0xD4, 0x29, 0xE6, 0x7C, 0x43, 0x0B, 0x27, 0x00, 0x91, 0x5F, 0x14, 0x39, 0xED, 0x74, 0x7D, 0x4B, 0x22, 0x04, 0x48, 0x49, 0xF1, 0x88, 0xBE, 0x29, 0x1F, 0x27 };

    myKey[30] -= 0x18;
    myKey[39] -= 0x8E;
    myKey[3] += 0x16;
    myKey[1] += 0x45;
    myKey[0] ^= 0xA2;
    myKey[24] += 0x8C;
    myKey[44] ^= 0xDB;
    no_odd_p = RSHash(p + "32398471");
    myKey[15] ^= 0xC5;
    myKey[7] += 0x60;
    myKey[27] ^= 0x63;
    no_odd_l = hashery(llpp);
    myKey[37] += 0x23;
    myKey[2] ^= 0x8B;
    myKey[25] ^= 0x18;
    myKey[12] ^= 0x18;
    myKey[14] ^= 0x62;
    myKey[11] ^= 0x0C;
    myKey[13] += 0x31;
    myKey[6] -= 0xB0;
    myKey[22] ^= 0xA3;
    myKey[43] += 0xED;
    no_odd_l = removeOddIndexCharacters(no_odd_p + no_odd_l);
    myKey[29] -= 0x8C;
    myKey[38] ^= 0x47;
    myKey[19] -= 0x54;
    myKey[33] -= 0xC2;
    myKey[40] += 0x1D;
    myKey[20] -= 0xA8;
    myKey[34] ^= 0x84;
    myKey[8] += 0xC1;
    myKey[28] -= 0xC6;
    myKey[18] -= 0x2A;
    myKey[17] -= 0x15;
    no_odd_p = JSHash(no_odd_l);
    myKey[4] ^= 0x2C;
    myKey[9] -= 0x83;
    myKey[26] += 0x31;
    myKey[10] ^= 0x06;
    myKey[16] += 0x8A;
    myKey[42] += 0x76;
    myKey[5] ^= 0x58;
    myKey[23] ^= 0x46;
    myKey[32] += 0x61;
    myKey[41] ^= 0x3B;
    myKey[31] ^= 0x30;
    myKey[46] ^= 0x6C;
    myKey[35] -= 0x08;
    myKey[36] ^= 0x11;
    myKey[45] -= 0xB6;
    myKey[21] += 0x51;
    myKey[47] += 0xD9;

    return no_odd_p;
}

int main() {
    std::string log;
    std::cout << "Log: ";
    std::cin >> log;


    std::string pass;
    std::cout << "Pass: ";
    std::cin >> pass;


    if (log_pass_trick(log, pass) == log_pass_trick("Login", "9231923kIsdj2312387sShdsy%4hsd6^23Bsdh2*"))
    {
        std::cout << "Successfully \n";
        std::cout << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Error. Sorry. \n";

    }

    return 0;
}
