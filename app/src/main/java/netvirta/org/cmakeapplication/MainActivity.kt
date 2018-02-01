package netvirta.org.cmakeapplication

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*
import netvirta.org.somenativelibrary.Kernel

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Example of a call to a native method
        val ker = Kernel()
        sample_text.text = ker.stringFromJNI()
    }

}
