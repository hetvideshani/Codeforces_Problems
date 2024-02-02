#include <stdio.h>

int main()
{
    int a[3][3], i, j, new[3][3], k, l;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            new[i][j] = 1;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                if (i == 1 && j == 1)
                {
                    for (k = 0; k < 3; k++)
                    {
                        for (l = 0; l < 3; l++)
                        {
                            if (k == 1 || l == 1)
                            {
                                if (new[k][l] == 0)
                                {
                                    new[k][l] = 1;
                                }
                                else
                                {
                                    new[k][l] = 0;
                                }
                            }
                        }
                    }
                }
                else if (i == 1 && j == 0)
                {
                    for (k = 0; k < 3; k++)
                    {
                        for (l = 0; l < 2; l++)
                        {
                            if ((k == 0 && l == 1) || (k == 2 && l == 1))
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }

                else if (i == 0 && j == 1)
                {
                    for (k = 0; k < 2; k++)
                    {
                        for (l = 0; l < 3; l++)
                        {
                            if ((k == 1 && l == 0) || (k == 1 && l == 2))
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }

                else if (i == 1 && j == 2)
                {
                    for (k = 0; k < 3; k++)
                    {
                        for (l = 1; l < 3; l++)
                        {
                            if ((k == 0 && l == 1) || (k == 2 && l == 1))
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }

                else if (i == 2 && j == 1)
                {
                    for (k = 1; k < 3; k++)
                    {
                        for (l = 0; l < 3; l++)
                        {
                            if ((k == 1 && l == 0) || (k == 1 && l == 2))
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }

                else if (i == 0 && j == 0)
                {
                    for (k = 0; k < 2; k++)
                    {
                        for (l = 0; l < 2; l++)
                        {
                            if (k == 1 && l == 1)
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }
                else if (i == 0 && j == 2)
                {
                    for (k = 0; k < 2; k++)
                    {
                        for (l = 1; l < 3; l++)
                        {
                            if (k == 1 && l == 1)
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }
                else if (i == 2 && j == 0)
                {
                    for (k = 1; k < 3; k++)
                    {
                        for (l = 0; l < 2; l++)
                        {
                            if (k == 1 && l == 1)
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }
                else if (i == 2 && j == 2)
                {
                    for (k = 1; k < 3; k++)
                    {
                        for (l = 1; l < 3; l++)
                        {
                            if (k == 1 && l == 1)
                            {
                                continue;
                            }
                            else
                            {
                                if (new[k][l] == 1)
                                {
                                    new[k][l] = 0;
                                }
                                else
                                {
                                    new[k][l] = 1;
                                }
                            }
                        }
                    }
                }
            }

            // for (k = 0; k < 3; k++)
            // {
            //     for (l = 0; l < 3; l++)
            //     {
            //         printf("%d", new[k][l]);
            //     }
            //     printf("\n");
            // }
            // printf("\n");
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", new[i][j]);
        }
        printf("\n");
    }
}