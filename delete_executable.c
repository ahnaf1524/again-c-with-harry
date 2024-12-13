#include <stdio.h>
#include <windows.h>

void deleteExeFiles(const char *directory)
{
    WIN32_FIND_DATA findFileData;
    HANDLE hFind;

    char searchPath[MAX_PATH];
    snprintf(searchPath, sizeof(searchPath), "%s\\*.exe", directory);

    // Find all .exe files in the directory
    hFind = FindFirstFile(searchPath, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE)
    {
        printf("No .exe files found or invalid directory path.\n");
        return;
    }

    do
    {
        char filePath[MAX_PATH];
        snprintf(filePath, sizeof(filePath), "%s\\%s", directory, findFileData.cFileName);

        // Delete the .exe file
        if (DeleteFile(filePath))
        {
            printf("Deleted: %s\n", filePath);
        }
        else
        {
            printf("Failed to delete: %s\n", filePath);
        }

    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
}

int main()
{
    char directory[MAX_PATH];

    printf("Enter the directory path: ");
    fgets(directory, sizeof(directory), stdin);

    // Remove trailing newline character from fgets
    size_t len = strlen(directory);
    if (len > 0 && directory[len - 1] == '\n')
    {
        directory[len - 1] = '\0';
    }

    deleteExeFiles(directory);

    return 0;
}