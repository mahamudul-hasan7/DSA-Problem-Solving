param(
    [Parameter(Mandatory=$true)]
    [string]$File,

    [Parameter(Mandatory=$true)]
    [string]$Message
)

if (-not (Test-Path $File)) {
    throw "File not found: $File"
}

git add -- "$File"
git commit -m "$Message"
git push origin HEAD
