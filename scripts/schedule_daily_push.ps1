$repo = "D:\DSA-Problem-Solving"
$times = "09:00","13:00","17:00","21:00"

foreach ($time in $times) {
    $taskName = "DSA-Push-$($time.Replace(':',''))"
    schtasks /Create /TN $taskName /SC DAILY /ST $time /TR "powershell -ExecutionPolicy Bypass -File \"$repo\scripts\push_now.ps1\"" /F | Out-Null
}

Write-Host "Daily push schedule created: 09:00, 13:00, 17:00, 21:00"
