int main()              /* To compute x! + y! + z! */
{
    int x, y, z;
    cout << "Enter x, y, z: "; cin >> x >> y >> z;

    cout << x << "! + " << y << "! + " << z << "! = " 
         << factorial(x) + factorial(y) + factorial(z) << endl;
    return 0;
}
