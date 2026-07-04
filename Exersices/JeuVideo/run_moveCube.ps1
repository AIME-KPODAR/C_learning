# Script PowerShell pour compiler et exécuter moveCube.c

# Étape 1 : Compiler
gcc src/moveCube.c src/glad.c -Iinclude -Llib -lSDL2main -lSDL2 -lopengl32 -lglu32 -o moveCube.exe

# Vérifier si la compilation a réussi
if ($LASTEXITCODE -eq 0) {
    Write-Host "Compilation reussie, lancement du programme..."
    # Étape 2 : Exécuter
    .\moveCube.exe
} else {
    Write-Host "Erreur lors de la compilation"
}
