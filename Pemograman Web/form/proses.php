<!DOCTYPE html>
<html lang="id">
<head>
  <meta charset="UTF-8">
  <title>Hasil Pendaftaran</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #40E0D0;
      padding: 20px;
    }

    .container {
      background: #fff;
      max-width: 600px;
      margin: auto;
      padding: 30px;
      border-radius: 10px;
      box-shadow: 0 4px 8px rgba(0,0,0,0.1);
    }

    h2 {
      color: #2c3e50;
    }

    p {
      line-height: 1.6;
    }
  </style>
</head>
<body>
  <div class="container">
    <h2>Data Pendaftaran Anda</h2>
    <p><strong>Nama:</strong> <?php echo htmlspecialchars($_POST['nama']); ?></p>
    <p><strong>Email:</strong> <?php echo htmlspecialchars($_POST['email']); ?></p>
    <p><strong>Jenis Kelamin:</strong> <?php echo htmlspecialchars($_POST['gender']); ?></p>
    <p><strong>Hobi:</strong>
      <?php
        if (!empty($_POST['hobi'])) {
          echo implode(', ', array_map('htmlspecialchars', $_POST['hobi']));
        } else {
          echo 'Tidak ada';
        }
      ?>
    </p>
    <p><strong>Kota:</strong> <?php echo htmlspecialchars($_POST['kota']); ?></p>
    <p><strong>Keterangan:</strong> <?php echo nl2br(htmlspecialchars($_POST['keterangan'])); ?></p>
  </div>
</body>
</html>
