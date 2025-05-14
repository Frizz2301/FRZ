<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    echo "<h1>Form Data Received</h1>";

    function getPost($key) {
        return isset($_POST[$key]) ? htmlspecialchars($_POST[$key]) : '(Not provided)';
    }

    echo "<strong>Text:</strong> " . getPost("text_input") . "<br>";
    echo "<strong>Password:</strong> " . getPost("password_input") . "<br>";
    echo "<strong>Email:</strong> " . getPost("email_input") . "<br>";
    echo "<strong>Number:</strong> " . getPost("number_input") . "<br>";
    echo "<strong>Date:</strong> " . getPost("date_input") . "<br>";
    echo "<strong>Time:</strong> " . getPost("time_input") . "<br>";
    echo "<strong>Datetime-Local:</strong> " . getPost("datetime_local_input") . "<br>";
    echo "<strong>Range:</strong> " . getPost("range_input") . "<br>";
    echo "<strong>Color:</strong> " . getPost("color_input") . "<br>";
    echo "<strong>URL:</strong> " . getPost("url_input") . "<br>";
    echo "<strong>Telephone:</strong> " . getPost("tel_input") . "<br>";
    echo "<strong>Select:</strong> " . getPost("select_input") . "<br>";
    echo "<strong>Radio Group:</strong> " . getPost("radio_group") . "<br>";

    if (isset($_POST["check_group"])) {
        echo "<strong>Checkbox:</strong> ";
        $checks = $_POST["check_group"];
        if (is_array($checks)) {
            echo implode(", ", array_map('htmlspecialchars', $checks)) . "<br>";
        } else {
            echo htmlspecialchars($checks) . "<br>";
        }
    } else {
        echo "<strong>Checkbox:</strong> (None checked)<br>";
    }

    echo "<strong>Textarea:</strong> " . nl2br(getPost("textarea_input")) . "<br>";
    echo "<strong>Hidden Input:</strong> " . getPost("hidden_input") . "<br>";

    // File upload (will only work if enctype="multipart/form-data" is set in form)
    if (isset($_FILES["file_input"])) {
        $file = $_FILES["file_input"];
        if ($file["error"] == UPLOAD_ERR_OK) {
            echo "<strong>Uploaded File:</strong> " . htmlspecialchars($file["name"]) . "<br>";
        } else {
            echo "<strong>Uploaded File:</strong> Upload failed<br>";
        }
    }
} else {
    echo "<p>No data submitted.</p>";
}
?>
