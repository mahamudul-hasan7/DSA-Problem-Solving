Set-Location "D:\DSA-Problem-Solving"
git pull --rebase origin main
if ($LASTEXITCODE -ne 0) {
    git pull --rebase origin master
}
git push origin HEAD
