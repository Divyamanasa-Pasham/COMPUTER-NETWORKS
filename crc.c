#include <stdio.h>
#include <string.h>
int main()
{
    char data[100], generator[20], code[120];
    int data_len, gen_len;
    int i, j;
    printf("Enter data: ");
    scanf("%s", data);
    printf("Enter generator: ");
    scanf("%s", generator);
    data_len = strlen(data);
    gen_len = strlen(generator);
    strcpy(code, data);
    for (i = 0; i < gen_len - 1; i++)
        code[data_len + i] = '0';
    code[data_len + gen_len - 1] = '\0';
    for (i = 0; i <= data_len - 1; i++)
    {
        if (code[i] == '1')
        {
            for (j = 0; j < gen_len; j++)
            {
                if (code[i + j] == generator[j])
                    code[i + j] = '0';
                else
                    code[i + j] = '1';
            }
        }
    }
    printf("CRC: ");
    for (i = data_len; i < data_len + gen_len - 1; i++)
        printf("%c", code[i]);
    printf("\n");
    printf("Transmitted data: %s\n", data);
    for (i = data_len; i < data_len + gen_len - 1; i++)
        printf("%c", code[i]);
    printf("\n");
    return 0;
}
