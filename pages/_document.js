import NextDocument, { Head, Main, NextScript } from 'next/document'
import tachyons from 'tachyons/css/tachyons.min.css';

export default class Document extends NextDocument {
  render () {
    return (
      <html>
        <Head>
          <style dangerouslySetInnerHTML={{ __html: tachyons }} />
          <script
            type="text/javascript"
            id="hs-script-loader"
            src="//js.hs-scripts.com/1653271.js"
            async
            defer
          />
        </Head>
        <body className='sans-serif'>
          <Main />
          <NextScript />
        </body>
      </html>
    )
  }
}