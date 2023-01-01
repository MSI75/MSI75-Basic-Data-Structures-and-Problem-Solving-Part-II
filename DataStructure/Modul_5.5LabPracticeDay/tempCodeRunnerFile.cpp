  int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            cout<<arr1[i++]<<" ";
        else if (arr2[j] < arr1[i])
            cout<<arr2[j++]<<" ";
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }