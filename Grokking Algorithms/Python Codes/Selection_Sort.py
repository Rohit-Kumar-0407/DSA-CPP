def findSmallest(arr):
    smallest = arr[0]
    smallest_index = 0
    for i in range(len(arr)):
        if smallest > arr[i]:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

def Selection_Sort(arr):
    sorted_arr = []
    temp_arr = list(arr)
    for i in range(len(temp_arr)):
        smallest_index = findSmallest(temp_arr)
        sorted_arr.append(temp_arr.pop(smallest_index))
    return sorted_arr

sorted_list = Selection_Sort([25,49,32,64,100,91,65])
print(sorted_list)