package com.github.mzule.ndkdemo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView textView = (TextView) findViewById(R.id.textView);
        assert textView != null;
        textView.setText(Codec.encode("haha"));

        String compress = compress();
        Toast.makeText(MainActivity.this, "compress=" + md5(compress), Toast.LENGTH_SHORT).show();
    }

    public native String compress();

    public native String md5(String src);
}
