int main()
{
    int j;                  // Apply to S1,S5,S6
    int k;                  // Apply to S1,S2,S3,S4,S6
    S1;

    for (...)
    {
        int j;              // Apply to S2,S4
        S2;
        while (...)
        {
            S7;             // <---  Which j?
            int j;          // Apply to S3
            S3;
        }
        S4;
    }
    while (...)
    {
        int k;              // Apply to S5
        S5;
    }
    S6;
}
