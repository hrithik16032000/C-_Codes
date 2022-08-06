def minimumSwaps(arr1, arr2, n):
    sumArr1 = 0; sumArr2 = 0;
    for i in range(n):
        sumArr1 += arr1[i];
        sumArr2 += arr2[i];
    if (sumArr1 % 2 == 0 and sumArr2 % 2 == 0):
        print(0);
        return;
    if (sumArr1 % 2 != 0 and sumArr2 % 2 != 0):
        flag = -1;
        for i in range(n):
            if ((arr1[i] + arr2[i]) % 2 == 1):
                flag = 1;
                break;
        print(flag);
        return;
    print(-1);
if name == '_main_':
    N = int(input())
    arr1 =list(map(int, input().split()))
    m = int(input())
    arr2 =list(map(int, input().split()))
    minimumSwaps(arr1, arr2, N);